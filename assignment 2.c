#include <stdio.h>
#include <math.h>
    int main(){

    int Radius;
    const double PI = 3.142;
    double Volume;
    double SurfaceArea;
    
    printf(" Enter Radius =  ");
    scanf("%d",&Radius );

    Volume  =  (4.0/3.0) * pow( Radius,3) * PI ;
    SurfaceArea =  4 * PI * pow( Radius,2 );

    printf(" Volume = %.2lf \n",Volume);
    printf(" SurfaceArea = %.2lf \n ",SurfaceArea);  

   return 0;
    }