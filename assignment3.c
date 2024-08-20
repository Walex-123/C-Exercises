#include <stdio.h>
#include <math.h>
   int main(){

   double Adjacent ;
   double Opposite ;
   double Hypotenause ;
   
   printf(" Enter Adjacent :  \n"); 
   scanf("%lf",&Adjacent);

   printf(" Enter Opposite :  \n");
   scanf("%lf",&Opposite); 

   Hypotenause =sqrt( pow(Adjacent,2) + pow(Opposite,2) );
   printf("%lf",Hypotenause);


    return 0;
   }
