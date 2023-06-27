#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* generate_password() {
    const char* password = "Tada! Congrats";
    char* generated = malloc((strlen(password) + 1) * sizeof(char));
    strcpy(generated, password);
    return generated;
}

int main() {
    char* password = generate_password();
    printf("Generated Password: %s\n", password);

    if (strcmp(password, "Tada! Congrats") == 0) {
        printf("Correct password!\n");
    } else {
        printf("Wrong password\n");
    }

    free(password);

    return 0;
}
