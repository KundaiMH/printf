#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  char *s;
  char *s2;
  char *s3;
  char *s4;
  char c;
  int i;
  int b;

  c = 'p';

  i = -123455;

  s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit\n";

  s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";

  s3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";

  s4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";

  b = 98;

  _printf("Peter and Michael colaborating\n");
  printf("Peter and Michael colaborating\n");
  _printf("--------------\n\n\n");
  _printf("fasdf\n %s\n %c\n %s\n %s\n %s\n %i\n %b\n\n\n", s, c, s2, s3, s4, i, b);
  printf("fasdf\n %s\n %c\n %s\n %s\n %s\n %i\n\n\n", s, c, s2, s3, s4, i);
  _printf("--------------\n\n");
  _printf("%b\n", 98);
  _printf("--------------\n\n\n");
  return (0);
}11;rgb:0000/0000/0000
