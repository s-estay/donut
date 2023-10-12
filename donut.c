#include <stdio.h>

void print_grid(void)
{
  /* escape sequences
     \n new line
     \t horizontal tab
     \v vertical tab
     \\ backslash
     \" double quotation mark
     \? question mark
  */ 
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
}

void print_c_version(void)
{
  if (__STDC_VERSION__ >= 201710L)
    printf("C18\n");
  else if (__STDC_VERSION__ >= 201112L)
    printf("C11\n");
  else if (__STDC_VERSION__ >= 199901L)
    printf("C99\n");
  else
    printf("C89\n");
}

int main(void)
{
  printf("Hello, World!\n");
  print_c_version();
  print_grid();
  return 0;
}
