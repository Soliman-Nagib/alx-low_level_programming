#include <stdio.h>
/*
* comment
* comment 2
*/
void print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet(void);
	return (0);
}
