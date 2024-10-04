#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>

int main() {
    char hostname[1024];
    if (gethostname(hostname, sizeof(hostname)) == 0)
        printf("hostname: %s\n", hostname);

    struct utsname sysinfo;
    if (uname(&sysinfo) == 0) {
        printf("system name: %s\n", sysinfo.sysname);
        printf("node name: %s\n", sysinfo.nodename);
        printf("release: %s\n", sysinfo.release);
        printf("version: %s\n", sysinfo.version);
        printf("machine: %s\n", sysinfo.machine);
    }

    return 0;
}
