#include "byte.h"
#include "buffer.h"

ssize_t buffer_getn(buffer* b,char* x,size_t len) {
  size_t blen;

  for(blen=0;blen<len;++blen) {
    register ssize_t r;
    if ((r=buffer_getc(b,x))<0) return r;
    if (r==0) break;
    ++x;
  }
  return blen;
}