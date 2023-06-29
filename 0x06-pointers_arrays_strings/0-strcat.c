#include<stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte used to replace
 * @n: number of  bytes to replace
 * Description: fills memory s with byte b for n bytes
 * Return: pointer to memory
 **/

char *strcat(char *dest, char *src)
{
  int i, j;

  i = 0;
  while (dest[i] != '\0')
  {
    i++;
  }

  j = 0;
  while (src[j] != '\0')
  {
    dest[i + j] = src[j];
    j++;
  }

  dest[i + j] = '\0';

  return dest;
}
