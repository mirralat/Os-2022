#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
 
 
int main()
{
  long page = sysconf(_SC_PAGESIZE);
 
  while(1)
  {
    char *meme;
    meme = (char*)calloc(sizeof(char), page);
 
    if (meme == 0 )
    {
      printf("Not enough memory!");
    }
  }
}
