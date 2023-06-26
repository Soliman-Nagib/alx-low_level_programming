#include <stdio.h>
/*
* comment
* comment 2
*/
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
