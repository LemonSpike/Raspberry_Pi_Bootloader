
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_locks_ReentrantReadWriteLock$NonfairSync__
#define __java_util_concurrent_locks_ReentrantReadWriteLock$NonfairSync__

#pragma interface

#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>

class java::util::concurrent::locks::ReentrantReadWriteLock$NonfairSync : public ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync
{

public: // actually package-private
  ReentrantReadWriteLock$NonfairSync();
  jboolean writerShouldBlock(::java::lang::Thread *);
  jboolean readerShouldBlock(::java::lang::Thread *);
private:
  static const jlong serialVersionUID = -8159625535654395037LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_locks_ReentrantReadWriteLock$NonfairSync__