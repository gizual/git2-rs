#include <errno.h>
#include <sys/types.h>
#include <unistd.h>

#ifndef weak
#define weak __attribute__((__weak__))
#endif

struct passwd *getpwnam(const char *name) {
  errno = ENOENT;
  return 0;
}

struct passwd *getpwuid(uid_t uid) {
  errno = ENOENT;
  return 0;
}

weak int getpwnam_r(const char *name, struct passwd *pwd, char *buf,
                    size_t buflen, struct passwd **result) {
  return ENOENT;
}

weak int getpwuid_r(uid_t uid, struct passwd *pwd, char *buf, size_t buflen,
                    struct passwd **result) {
  return ENOENT;
}

weak void setpwent(void) {}

weak void endpwent(void) {}

struct passwd *getpwent(void) {
  errno = EIO;
  return NULL;
}