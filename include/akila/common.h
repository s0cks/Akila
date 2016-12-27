#ifndef AKILA_COMMON_H
#define AKILA_COMMON_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#ifndef FALSE
#define FALSE 0
#endif // FALSE

#ifndef TRUE
#define TRUE 1
#endif // TRUE

#ifndef container_of
#define container_of(ptr_, type_, member_)({ \
  const typeof(((type_*) 0)->member_)* __mbptr = ((void*) ptr_); \
  (type_*)((char*) __mbptr - offsetof(type_, member_)); \
})
#endif // container_of

#endif // AKILA_COMMON_H
