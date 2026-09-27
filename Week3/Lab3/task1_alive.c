#include <stdio.h>
#include <unistd.h>

int main() {
    printf("I am starting...\n");

   // loop for 30 seconds
    for(int i = 1; i <= 30; i++) {
        sleep(1); // pauses execution for 1 second
}

    printf("I am finished.\n");
    return 0;
}
