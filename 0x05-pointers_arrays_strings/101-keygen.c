#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 15

char* generate_password() {
    char* password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

    /* Characters to use in the password */
    const char* characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % strlen(characters);
        password[i] = characters[index];
    }

    password[PASSWORD_LENGTH] = '\0';
    return password;
}

int main() {
    char* password;
    srand(time(NULL)); /* Seed the random number generator with current time */

    password = generate_password();
    printf("Generated Password: %s\n", password);

    if (strcmp(password, "Tada! Congrats") == 0) {
        /* printf("Tada! Congrats\n"); */
    } else {
        printf("Wrong password\n");
    }

    free(password);

    return 0;
}
