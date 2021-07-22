#ifndef IOPRIO_H
#define IOPRIO_H

#include <sys/syscall.h>
#include <unistd.h>
#include <linux/ioprio.h>

#define IOPRIO_N_CLASSES        8

static inline int ioprio_set(int which, int who, int ioprio) {
        return syscall(__NR_ioprio_set, which, who, ioprio);
}

static inline int ioprio_get(int which, int who) {
        return syscall(__NR_ioprio_get, which, who);
}

#endif
