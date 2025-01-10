#include <stdio.h>
#include <stdlib.h>

int fail(char msg[]) {
    printf("\033[91m[FAIL] %s", msg);
    return 0;
}

int info(char msg[]) {
    printf("[INFO] %s", msg);
    return 0;
}

int warn(char msg[]) {
    printf("\033[93m[WARN] %s", msg);
    return 0;
}

int ok(char msg[]) {
    printf("\033[96m[OK] %s", msg);
    return 0;
}

int main() {
    int integer = 3;
    double decimal = 5.3;
    char letter = 'a';
    char string[] = "hello world";

    fail("hello");

    return 0;
}
