#include <stdio.h>
#include <math.h>
#include <string.h>

int rectangl(int lenght, int width, int area1)
{

   area1 = (lenght * width);

   return area1;
}
int squar(int side1, int side2, int area2)
{

   area2 = (side1 * side2);

   return area2;
}
int triangl(int base, int height, int area3)
{

   area3 = (base * height) / 2;

   return area3;
}
int trapeziu(int side_a, int side_b, int height2, int area4)
{

   area4 = ((side_a + side_b) * height2) / 2;

   return area4;
}
int parallelogra(int base2, int height3, int area5)
{

   area5 = (base2 * height3);

   return area5;
}
int main()
{

   int lenght, width ;
   int side_1, side_2 ;
   int base, height ;
   int side_a, side_b, height2 ;
   int base2, height3 ;
   double area1 , area2 , area3 , area4 , area5 ;
   char shape[20] ;
   char shape1[] = "rectangle";
   char shape2[] = "square" ;
   char shape3[] = "triangle" ;
   char shape4[] = "trapezium" ;
   char shape5[] = "parallelogram" ;

   printf("Enter shape ");
   scanf("%s", &shape);
   int result1 = strcmp(shape,shape1);
   int result2 = strcmp(shape,shape2);
   int result3 = strcmp(shape,shape3);
   int result4 = strcmp(shape,shape4);
   int result5 = strcmp(shape,shape5);

   if (result1==0)
   {

      printf("Enter lenght :   \n");
      scanf("%d", &lenght);
      printf("Enter Width :   ");
      scanf("%d", &width);
      rectangl(lenght , width , area1 );
      printf("%.2lf", area1);
   }
   else if (result2==0)
      {

         printf("Enter side_1 :  \n");
         scanf("%d", &side_1);
         printf("Enter side_2 :  ");
         scanf("%d", &side_2);
         squar(side_1 , side_2 , area2 );
         printf("%.2lf", area2);
      }
   else if (result3==0)
      {

         printf("Enter base :  \n");
         scanf("%d", &base);
         printf("Enter height :  ");
         scanf("%d", &height);
         triangl( base , height , area3 );
         printf("%.2lf", area3);
      }
   else if(result4==0)
      {

         printf("Enter side_a :  \n");
         scanf("%d", &side_a);
         printf("Enter side_b :  ");
         scanf("%d", &side_b);
         trapeziu( side_a , side_b , height2 , area4 );
         printf("%.2lf", area4);
      }
    else if (result5==0)
      {

         printf("Enter base2 :  \n");
         scanf("%d", &base2);
         printf("Enter height3 :  ");
         scanf("%d", &height3);
         parallelogra( base2 , height3 , area5 );
         printf("%.2lf", &area5);
      }
    else{
      printf("Enter a valid shape");
      }
   return 0;
} 