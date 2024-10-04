#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>

int main() {
    uid_t uid = getuid();

    struct passwd* pw = getpwuid(uid);
    struct passwd* root_pw = getpwnam("root");

    printf("Username: %s\n", pw->pw_name);
    printf("UID: %d\n", pw->pw_uid);
    printf("GID: %d\n", pw->pw_gid);
    printf("User directory: %s\n", pw->pw_dir);
    printf("Full username: %s\n", pw->pw_gecos);
    printf("Command shell: %s\n\n", pw->pw_shell);

    printf("Root | Username: %s\n", root_pw->pw_name);
    printf("Root | UID: %d\n", root_pw->pw_uid);
    printf("Root | GID: %d\n", root_pw->pw_gid);
    printf("Root | User directory: %s\n", root_pw->pw_dir);
    printf("Root | Full username: %s\n", root_pw->pw_gecos);
    printf("Root | Command shell: %s\n", root_pw->pw_shell);

    return 0;
}
