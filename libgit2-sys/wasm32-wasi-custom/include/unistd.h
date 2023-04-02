#include_next <unistd.h>

#ifndef _CUSTOM_UNISTD_H
#define _CUSTOM_UNISTD_H

#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

pid_t getpid(void);
uid_t getuid();
uid_t geteuid();
uid_t getgid();
uid_t getegid();
uid_t getpgid(pid_t pid);
uid_t getsid(pid_t pid);
uid_t getppid();
int chmod(const char *path, mode_t mode);

#endif