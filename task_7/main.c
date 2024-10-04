#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char* env_var_name = "MY_EXAMPLE_ENV_VAR";
    setenv(env_var_name, "value", 1);

    if (getenv(env_var_name)) {
        unsetenv(env_var_name);
        printf("%s deleted\n", env_var_name);
    } 
    else { 
        clearenv();
        printf("all environment variables have been deleted"); 
    }

    extern char** environ;
    char** env = environ;

    printf("current environment variables state:\n");
    while (*env) {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}
