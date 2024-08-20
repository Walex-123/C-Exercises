#include <stdio.h>
#include <stdbool.h>
   int main(){

      float item1 = 3.99;
      float item2 = 43.99;
      float item3 = 103.99;
      const float PERMEABILITY = 45.8888876;
      

      printf("item1 = $ %-9.2f \n",item1);
      printf("item2 = $ %-9.2f \n",item2);
      printf("item3 = $ %-9.2f \n",item3);
      printf("%f",PERMEABILITY);
    return 0;
   }