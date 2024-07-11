#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

uid_t getuid() { return 0; };
uid_t geteuid() { return 0; };
uid_t getgid() { return 0; };
uid_t getegid() { return 0; };
pid_t getpid(void) { return 0; };
uid_t getppid() { return 0; };
uid_t getpgid(pid_t pid) { return 0; };
uid_t getsid(pid_t pid) { return 0; };

char *realpath(const char *path, char *resolved) {
  if (path == NULL) {
    errno = EINVAL;
    return 0;
  }
  if (resolved == NULL) {
    resolved = malloc(4096);
    if (resolved == NULL)
      return 0;
  }
  strcpy(resolved, path);
  return resolved;
}

#include <stdio.h>
#include <sys/stat.h>

