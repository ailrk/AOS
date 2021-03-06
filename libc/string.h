#pragma once

#include "stddef.h"
#include "cdefs.h"

#ifdef __cplusplus
extern "C" {
#endif

int memcmp(void const *, void const *, size_t);
void *memcpy(void *__restrict, void const *__restrict, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
size_t strlen(char const *);

#ifdef __cplusplus
}
#endif
