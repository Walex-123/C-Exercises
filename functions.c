#include <stdio.h>
#include <stdbool.h>
#include <math.h>
    int max_of_four(int a ,int b ,int c ,int d ){

       int max ;
       max = findMax(a,b,c,d);
       

       return max ;
    }
    void max_of_four(int a , int b , int c , int d); //function prototype 
    int main(){
       int a , b , c , d , max ;
       scanf("%d %d %d %d", &a , &b , &c , &d);
       max_of_four(a,b,c,d) ;
       printf("%d",max);
       
     return 0;
    }
      if(b>a) max = b ;
       if(c>a) max = c ;
       if(d>a) max = d ;


