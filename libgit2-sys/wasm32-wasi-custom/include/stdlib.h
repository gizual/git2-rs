#include_next <stdlib.h>

#ifndef _CUSTOM_STDLIB_H
#define _CUSTOM_STDLIB_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

char *realpath(const char *pathname, char *resolved);

#endif