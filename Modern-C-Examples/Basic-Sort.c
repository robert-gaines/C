#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
  printf("Listing command line arguments...\n");

  int lenArgv = argc;

  int tempArgs[lenArgv];
  int sortedArgs[lenArgv];

  for(int i = 1; i < lenArgv; i++)
  {
    int value = atoi(argv[i]);

    printf("Current argument: %i \n", value);

    tempArgs[i] = value;
  }

  for(int i = 1; i < lenArgv; i++)
  {
     /* printf("New array value: %i \n", sortedArgs[i]); */

     int subjectValue = tempArgs[i];
     int nextIndex = i+1;
     sortedArgs[i] = subjectValue;

     if(sortedArgs[i] > sortedArgs[nextIndex])
     {
       printf("%i is greater than %i \n",sortedArgs[i],sortedArgs[nextIndex]);
       int temp  = sortedArgs[nextIndex];
       int temp2 = sortedArgs[i];
       sortedArgs[i] = temp;
       sortedArgs[nextIndex] = temp2;
     }

  }

  for(int i = 0; i < lenArgv; i++)
  {
    printf("%i\t", sortedArgs[i]);
  }

  return 0;
}
