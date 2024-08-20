#include <stdio.h>
  int main() {
 
  char name[25]; 

  printf("what is your name"); 
  // scanf("%24s", &name);
  // scanf can only be used for names or values that do not have spaces 
  //for one with spaces we use fgets but the fgets adds a newline character when running
  fgets( name , 25 ,stdin);
  printf(" you are %s \n ",name);

    return 0;
  }