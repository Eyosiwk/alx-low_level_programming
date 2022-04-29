#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
  int i;

  printf("argc = %\n", argc);
  printf("Let's see what is in argv[]\n");
  if(argc > 1)
  {
	  for(i = 1; i < argc; i++)
  {
	  printf("argv[%d] = %s\n", i, argv[i]);
	  sum += atoi(argv[i]);
  }
	  printF("Total = %d\n", sum);
  } 
  return 0;
}

