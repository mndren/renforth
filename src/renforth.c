#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char input[256];

    printf("Renforth Interpreter (0.0.1)\n");

    while (1) {
        printf("<< ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("\nEOF detected. Exiting...\n");
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            break;
        }

        printf("%s\n", input);
    }

    return 0;
}
