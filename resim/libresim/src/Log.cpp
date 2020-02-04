/*
Copyright (C) 2012, Mathias Gottschlag

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "Log.hpp"

#include <iostream>

Log::Log() : active(false), file(), time(0) {
}

void Log::tofile(const std::string &filename) {
	file.open(filename);
	if (!file) {
		throw std::runtime_error("Cannot open log file for writing.");
	}
	active = true;
}

void Log::debug(const std::string &source, const char *fmt, ...) {
	va_list args;
	if (active) {
		va_start(args, fmt);
		log(LogLevel::Debug, source, fmt, args);
		va_end( args );
	}
}
void Log::info(const std::string &source, const char *fmt, ...) {
	va_list args;
	if (active) {
		va_start(args, fmt);
		log(LogLevel::Information, source, fmt, args);
		va_end( args );
	}
}
void Log::warning(const std::string &source, const char *fmt, ...) {
	va_list args;
	if (active) {
		va_start(args, fmt);
		log(LogLevel::Warning, source, fmt, args);
		va_end( args );
	}
}
void Log::error(const std::string &source, const char *fmt, ...) {
	va_list args;
	if (active) {
		va_start(args, fmt);
		log(LogLevel::Error, source, fmt, args);
		va_end( args );
	}
}

void Log::incrementTime() {
	time++;
}

void Log::log(LogLevel::List level,
              const std::string &source,
              const char *fmt,
              va_list args) {
	if (active) {
		char text[256];
		vsnprintf(text, 256, fmt, args);
		LogLine line;
		line.time = time;
		line.level = level;
		line.source = source;
		line.text = text;
		fileMutex.lock();
		file << line.time << "\t" << line.text << std::endl;
		fileMutex.unlock();
	}
}
