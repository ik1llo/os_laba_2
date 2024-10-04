#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    setenv("MY_EXAMPLE_ENV_VAR", "setenv_value", 1);
    printf("setenv: MY_EXAMPLE_ENV_VAR=%s\n", getenv("MY_EXAMPLE_ENV_VAR"));

    char env_string[] = "MY_EXAMPLE_ENV_VAR=putenv_value";
    putenv(env_string);
    printf("putenv: MY_EXAMPLE_ENV_VAR=%s\n", getenv("MY_EXAMPLE_ENV_VAR"));

    return 0;
}
