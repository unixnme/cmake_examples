#include <stdio.h>

int main (int argc, char *argv[])
{
#ifdef MACRO
    printf("MACRO = %d\n", MACRO);
#else
    printf("MACRO not defined\n");
#endif
  return 0;
}
