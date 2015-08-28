/*
 * Copyright 2015 IBM
 * Author: Jan Willeke <willeke@linux.vnet.com.com>
 */

#include <string.h>

#include <seccomp.h>

#include "arch.h"
#include "arch-s390x.h"

/* NOTE: based on Linux 4.2-rc5 */
const struct arch_syscall_def s390x_syscall_table[] = { \
	{ "_llseek", __PNR__llseek },
	{ "_newselect", __PNR__newselect },
	{ "_sysctl", 149 },
	{ "accept", __PNR_accept },
	{ "accept4", __PNR_accept4 },
	{ "access", 33 },
	{ "acct", 51 },
	{ "add_key", 278 },
	{ "adjtimex", 124 },
	{ "afs_syscall", 137 },
	{ "alarm", 27 },
	{ "arm_fadvise64_64", __PNR_arm_fadvise64_64 },
	{ "arm_sync_file_range", __PNR_arm_sync_file_range },
	{ "arch_prctl", __PNR_arch_prctl },
	{ "bdflush", 134 },
	{ "bind", __PNR_bind },
	{ "bpf", 351 },
	{ "break", __PNR_break },
	{ "breakpoint", __PNR_breakpoint },
	{ "brk", 45 },
	{ "cachectl", __PNR_cachectl },
	{ "cacheflush", __PNR_cacheflush },
	{ "capget", 184 },
	{ "capset", 185 },
	{ "chdir", 12 },
	{ "chmod", 15 },
	{ "chown", 212 },
	{ "chown32", __PNR_chown32 },
	{ "chroot", 61 },
	{ "clock_adjtime", 337 },
	{ "clock_getres", 261 },
	{ "clock_gettime", 260 },
	{ "clock_nanosleep", 262 },
	{ "clock_settime", 259 },
	{ "clone", 120 },
	{ "close", 6 },
	{ "connect", __PNR_connect },
	{ "creat", 8 },
	{ "create_module", 127 },
	{ "delete_module", 129 },
	{ "dup", 41 },
	{ "dup2", 63 },
	{ "dup3", 326 },
	{ "epoll_create", 249 },
	{ "epoll_create1", 327 },
	{ "epoll_ctl", 250 },
	{ "epoll_ctl_old", __PNR_epoll_ctl_old },
	{ "epoll_pwait", 312 },
	{ "epoll_wait", 251 },
	{ "epoll_wait_old", __PNR_epoll_wait_old },
	{ "eventfd", 318 },
	{ "eventfd2", 323 },
	{ "execve", 11 },
	{ "execveat", 354 },
	{ "exit", 1 },
	{ "exit_group", 248 },
	{ "faccessat", 300 },
	{ "fadvise64", 253 },
	{ "fadvise64_64", __PNR_fadvise64_64 },
	{ "fallocate", 314 },
	{ "fanotify_init", 332 },
	{ "fanotify_mark", 333 },
	{ "fchdir", 133 },
	{ "fchmod", 94 },
	{ "fchmodat", 299 },
	{ "fchown", 207 },
	{ "fchown32", __PNR_fchown32 },
	{ "fchownat", 291 },
	{ "fcntl", 55 },
	{ "fcntl64", __PNR_fcntl64 },
	{ "fdatasync", 148 },
	{ "fgetxattr", 229 },
	{ "finit_module", 344 },
	{ "flistxattr", 232 },
	{ "flock", 143 },
	{ "fork", 2 },
	{ "fremovexattr", 235 },
	{ "fsetxattr", 226 },
	{ "fstat", 108 },
	{ "fstat64", __PNR_fstat64 },
	{ "fstatat64", __PNR_fstatat64 },
	{ "fstatfs", 100 },
	{ "fstatfs64", 266 },
	{ "fsync", 118 },
	{ "ftime", __PNR_ftime },
	{ "ftruncate", 93 },
	{ "ftruncate64", __PNR_ftruncate64 },
	{ "futex", 238 },
	{ "futimesat", 292 },
	{ "get_kernel_syms", 130 },
	{ "get_mempolicy", __PNR_get_mempolicy },
	{ "get_robust_list" , 305 },
	{ "get_thread_area", __PNR_get_thread_area },
	{ "getcpu", 311 },
	{ "getcwd", 183 },
	{ "getdents", 141 },
	{ "getdents64", 220 },
	{ "getegid", 202 },
	{ "getegid32", __PNR_getegid32 },
	{ "geteuid", 201 },
	{ "geteuid32", __PNR_geteuid32 },
	{ "getgid", 200 },
	{ "getgid32", __PNR_getgid32 },
	{ "getgroups", 205 },
	{ "getgroups32", __PNR_getgroups32 },
	{ "getitimer", 105 },
	{ "getpeername", __PNR_getpeername },
	{ "getpgid", 132 },
	{ "getpgrp", 65 },
	{ "getpid", 20 },
	{ "getpmsg", 188 },
	{ "getppid", 64 },
	{ "getpriority", 96 },
	{ "getrandom", 349 },
	{ "getresgid", 211 },
	{ "getresgid32", __PNR_getresgid32 },
	{ "getresuid", 209 },
	{ "getresuid32", __PNR_getresuid32 },
	{ "getrlimit", 191 },
	{ "getrusage", 77 },
	{ "getsid", 147 },
	{ "getsockname", __PNR_getsockname },
	{ "getsockopt", __PNR_getsockopt },
	{ "gettid", 236 },
	{ "gettimeofday", 78 },
	{ "getuid", 199 },
	{ "getuid32", __PNR_getuid32 },
	{ "getxattr", 227 },
	{ "gtty", __PNR_gtty },
	{ "idle", 112 },
	{ "init_module", 128 },
	{ "inotify_add_watch" , 285 },
	{ "inotify_init", 284 },
	{ "inotify_init1", 324 },
	{ "inotify_rm_watch" , 286 },
	{ "io_cancel", 247 },
	{ "io_destroy", 244 },
	{ "io_getevents", 245 },
	{ "io_setup", 243 },
	{ "io_submit", 246 },
	{ "ioctl", 54 },
	{ "ioperm", __PNR_ioperm},
	{ "iopl", __PNR_iopl },
	{ "ioprio_get", 283 },
	{ "ioprio_set", 282 },
	{ "ipc", 117 },
	{ "kcmp", 343 },
	{ "kexec_file_load", __PNR_kexec_file_load },
	{ "kexec_load", 277 },
	{ "keyctl", 280 },
	{ "kill", 37 },
	{ "lchown", 198 },
	{ "lchown32", __PNR_lchown32 },
	{ "lgetxattr", 228 },
	{ "link", 9 },
	{ "linkat", 296 },
	{ "listen", __PNR_listen },
	{ "listxattr", 230 },
	{ "llistxattr", 231 },
	{ "lock", __PNR_lock },
	{ "lookup_dcookie", 110 },
	{ "lremovexattr", 234 },
	{ "lseek", 19 },
	{ "lsetxattr", 225 },
	{ "lstat", 107 },
	{ "lstat64", __PNR_lstat64 },
	{ "madvise", 219 },
	{ "mbind", __PNR_mbind },
	{ "memfd_create", 350 },
	{ "migrate_pages", __PNR_migrate_pages },
	{ "mincore", 218 },
	{ "mkdir", 39 },
	{ "mkdirat", 289 },
	{ "mknod", 14 },
	{ "mknodat", 290 },
	{ "mlock", 150 },
	{ "mlockall", 152 },
	{ "mmap", 90 },
	{ "mmap2", __PNR_mmap2 },
	{ "modify_ldt", __PNR_modify_ldt },
	{ "mount", 21 },
	{ "move_pages", __PNR_move_pages },
	{ "mprotect", 125 },
	{ "mpx", __PNR_mpx },
	{ "mq_getsetattr", 276 },
	{ "mq_notify", 275 },
	{ "mq_open", 271 },
	{ "mq_timedreceive" , 274 },
	{ "mq_timedsend", 273 },
	{ "mq_unlink", 272 },
	{ "mremap", 163 },
	{ "msgctl", __PNR_msgctl },
	{ "msgget", __PNR_msgget },
	{ "msgrcv", __PNR_msgrcv },
	{ "msgsnd", __PNR_msgsnd },
	{ "msync", 144 },
	{ "multiplexer", __PNR_multiplexer },
	{ "munlock", 151 },
	{ "munlockall", 153 },
	{ "munmap", 91 },
	{ "name_to_handle_at", 335 },
	{ "nanosleep", 162 },
	{ "newfstatat", 293 },
	{ "nfsservctl", 169 },
	{ "nice", 34 },
	{ "oldfstat", __PNR_oldfstat },
	{ "oldlstat", __PNR_oldlstat },
	{ "oldolduname", __PNR_oldolduname },
	{ "oldstat", __PNR_oldstat },
	{ "olduname", __PNR_olduname },
	{ "oldwait4", __PNR_oldwait4 },
	{ "open", 5 },
	{ "open_by_handle_at", 336 },
	{ "openat", 288 },
	{ "pause", 29 },
	{ "pciconfig_iobase", __PNR_pciconfig_iobase },
	{ "pciconfig_read", __PNR_pciconfig_read },
	{ "pciconfig_write", __PNR_pciconfig_write },
	{ "perf_event_open", 331 },
	{ "personality", 136 },
	{ "pipe", 42 },
	{ "pipe2", 325 },
	{ "pivot_root", 217 },
	{ "poll", 168 },
	{ "ppoll", 302 },
	{ "prctl", 172 },
	{ "pread64", 180 },
	{ "preadv", 328 },
	{ "prlimit64", 334 },
	{ "process_vm_readv", 340 },
	{ "process_vm_writev", 341 },
	{ "prof", __PNR_prof },
	{ "profil", __PNR_profil },
	{ "pselect6", 301 },
	{ "ptrace", 26 },
	{ "putpmsg", 189 },
	{ "pwrite64", 181 },
	{ "pwritev", 329 },
	{ "query_module", 167 },
	{ "quotactl", 131 },
	{ "read", 3 },
	{ "readahead", 222 },
	{ "readdir", 89 },
	{ "readlink", 85 },
	{ "readlinkat", 298 },
	{ "readv", 145 },
	{ "reboot", 88 },
	{ "recv", __PNR_recv },
	{ "recvfrom", __PNR_recvfrom },
	{ "recvmmsg", __PNR_recvmmsg },
	{ "recvmsg", __PNR_recvmsg },
	{ "remap_file_pages", 267 },
	{ "removexattr", 233 },
	{ "rename", 38 },
	{ "renameat", 295 },
	{ "renameat2", 347 },
	{ "request_key", 279 },
	{ "restart_syscall", 7 },
	{ "rmdir", 40 },
	{ "rt_sigaction", 174 },
	{ "rt_sigpending", 176 },
	{ "rt_sigprocmask", 175 },
	{ "rt_sigqueueinfo", 178 },
	{ "rt_sigreturn", 173 },
	{ "rt_sigsuspend", 179 },
	{ "rt_sigtimedwait", 177 },
	{ "rt_tgsigqueueinfo", 330 },
	{ "rtas", __PNR_rtas },
	{ "s390_runtime_instr", 342 },
	{ "sched_get_priority_max", 159 },
	{ "sched_get_priority_min", 160 },
	{ "sched_getaffinity" , 240 },
	{ "sched_getattr", 346 },
	{ "sched_getparam", 155 },
	{ "sched_getscheduler", 157 },
	{ "sched_rr_get_interval", 161 },
	{ "sched_setaffinity" , 239 },
	{ "sched_setattr", 345 },
	{ "sched_setparam", 154 },
	{ "sched_setscheduler", 156 },
	{ "sched_yield", 158 },
	{ "seccomp", 348 },
	{ "security", __PNR_security },
	{ "select", 142 },
	{ "semctl", __PNR_semctl },
	{ "semget", __PNR_semget },
	{ "semop", __PNR_semop },
	{ "semtimedop", __PNR_semtimedop },
	{ "send", __PNR_send },
	{ "sendfile", 187 },
	{ "sendfile64", __PNR_sendfile64 },
	{ "sendmmsg", __PNR_sendmmsg },
	{ "sendmsg", __PNR_sendmsg },
	{ "sendto", __PNR_sendto },
	{ "set_mempolicy", __PNR_set_mempolicy },
	{ "set_robust_list" , 304 },
	{ "set_thread_area", __PNR_set_thread_area },
	{ "set_tid_address", 252 },
	{ "set_tls", __PNR_set_tls },
	{ "setdomainname", 121 },
	{ "setfsgid", 216 },
	{ "setfsgid32", __PNR_setfsgid32 },
	{ "setfsuid", 215 },
	{ "setfsuid32", __PNR_setfsuid32 },
	{ "setgid", 214 },
	{ "setgid32", __PNR_setgid32 },
	{ "setgroups", 206 },
	{ "setgroups32", __PNR_setgroups32 },
	{ "sethostname", 74 },
	{ "setitimer", 104 },
	{ "setns", 339 },
	{ "setpgid", 57 },
	{ "setpriority", 97 },
	{ "setregid", 204 },
	{ "setregid32", __PNR_setregid32 },
	{ "setresgid", 210 },
	{ "setresgid32", __PNR_setresgid32 },
	{ "setresuid", 208 },
	{ "setresuid32", __PNR_setresuid32 },
	{ "setreuid", 203 },
	{ "setreuid32", __PNR_setreuid32 },
	{ "setrlimit", 75 },
	{ "setsid", 66 },
	{ "setsockopt", __PNR_setsockopt },
	{ "settimeofday", 79 },
	{ "setuid", 213 },
	{ "setuid32", __PNR_setuid32 },
	{ "setxattr", 224 },
	{ "sgetmask", __PNR_sgetmask },
	{ "shmat", __PNR_shmat },
	{ "shmctl", __PNR_shmctl },
	{ "shmdt", __PNR_shmdt },
	{ "shmget", __PNR_shmget },
	{ "shutdown", __PNR_shutdown },
	{ "sigaction", 67 },
	{ "sigaltstack", 186 },
	{ "signal", 48 },
	{ "signalfd", 316 },
	{ "signalfd4", 322 },
	{ "sigpending", 73 },
	{ "sigprocmask", 126 },
	{ "sigreturn", 119 },
	{ "sigsuspend", 72 },
	{ "socket", __PNR_socket },
	{ "socketcall", 102 },
	{ "socketpair", __PNR_socketpair },
	{ "splice", 306 },
	{ "spu_create", __PNR_spu_create },
	{ "spu_run", __PNR_spu_run },
	{ "ssetmask", __PNR_ssetmask },
	{ "stat", 106 },
	{ "stat64", __PNR_stat64 },
	{ "statfs", 99 },
	{ "statfs64", 265 },
	{ "stime", __PNR_stime },
	{ "stty", __PNR_stty },
	{ "subpage_prot", __PNR_subpage_prot },
	{ "swapcontext", __PNR_swapcontext },
	{ "swapoff", 115 },
	{ "swapon", 87 },
	{ "switch_endian", __PNR_switch_endian },
	{ "symlink", 83 },
	{ "symlinkat", 297 },
	{ "sync", 36 },
	{ "sync_file_range" , 307 },
	{ "sync_file_range2", __PNR_sync_file_range2 },
	{ "syncfs", 338 },
	{ "syscall", __PNR_syscall },
	{ "sys_debug_setcontext", __PNR_sys_debug_setcontext },
	{ "sysfs", 135 },
	{ "sysinfo", 116 },
	{ "syslog", 103 },
	{ "sysmips", __PNR_sysmips },
	{ "tee", 308 },
	{ "tgkill", 241 },
	{ "time",  __PNR_time },
	{ "timer_create", 254 },
	{ "timer_delete", 258 },
	{ "timer_getoverrun", 257 },
	{ "timer_gettime", 256 },
	{ "timer_settime", 255 },
	{ "timerfd", 317 },
	{ "timerfd_create", 319 },
	{ "timerfd_gettime", 321 },
	{ "timerfd_settime", 320 },
	{ "times", 43 },
	{ "tkill", 237 },
	{ "truncate", 92 },
	{ "truncate64", __PNR_truncate64 },
	{ "tuxcall", __PNR_tuxcall },
	{ "ugetrlimit", __PNR_ugetrlimit },
	{ "ulimit", __PNR_ulimit },
	{ "umask", 60 },
	{ "umount", 22 },
	{ "umount2", 52 },
	{ "uname", 122 },
	{ "unlink", 10 },
	{ "unlinkat", 294 },
	{ "unshare", 303 },
	{ "uselib", 86 },
	{ "usr26", __PNR_usr26 },
	{ "usr32", __PNR_usr32 },
	{ "ustat", 62 },
	{ "utime", 30 },
	{ "utimensat", 315 },
	{ "utimes", 313 },
	{ "vfork", 190 },
	{ "vhangup", 111 },
	{ "vm86", __PNR_vm86 },
	{ "vm86old", __PNR_vm86old },
	{ "vmsplice", 309 },
	{ "vserver", __PNR_vserver },
	{ "wait4", 114 },
	{ "waitid", 281 },
	{ "waitpid", __PNR_waitpid },
	{ "write", 4 },
	{ "writev", 146 },
	{ NULL, __NR_SCMP_ERROR },
};

/**
 * Resolve a syscall name to a number
 * @param name the syscall name
 *
 * Resolve the given syscall name to the syscall number using the syscall table.
 * Returns the syscall number on success, including negative pseudo syscall
 * numbers; returns __NR_SCMP_ERROR on failure.
 *
 */
int s390x_syscall_resolve_name(const char *name)
{
	unsigned int iter;
	const struct arch_syscall_def *table = s390x_syscall_table;

	/* XXX - plenty of room for future improvement here */
	for (iter = 0; table[iter].name != NULL; iter++) {
		if (strcmp(name, table[iter].name) == 0)
			return table[iter].num;
	}

	return __NR_SCMP_ERROR;
}

/**
 * Resolve a syscall number to a name
 * @param num the syscall number
 *
 * Resolve the given syscall number to the syscall name using the syscall table.
 * Returns a pointer to the syscall name string on success, including pseudo
 * syscall names; returns NULL on failure.
 *
 */
const char *s390x_syscall_resolve_num(int num)
{
	unsigned int iter;
	const struct arch_syscall_def *table = s390x_syscall_table;

	/* XXX - plenty of room for future improvement here */
	for (iter = 0; table[iter].num != __NR_SCMP_ERROR; iter++) {
		if (num == table[iter].num)
			return table[iter].name;
	}

	return NULL;
}

/**
 * Iterate through the syscall table and return the syscall name
 * @param spot the offset into the syscall table
 *
 * Return the syscall name at position @spot or NULL on failure.  This function
 * should only ever be used internally by libseccomp.
 *
 */
const char *s390x_syscall_iterate_name(unsigned int spot)
{
	/* XXX - no safety checks here */
	return s390x_syscall_table[spot].name;
}
