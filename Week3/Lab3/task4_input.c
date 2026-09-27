#include <stdio.h>

int main () {
    char name[50];

    printf("Enter your name: ");

    // Read String from standard input
    scanf("%s", name);

    printf("Hello, %s! Welcome to OS Class.\n", name);

    return 0;
}
