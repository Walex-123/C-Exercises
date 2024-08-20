#include <stdio.h>
#include <stdbool.h>
   int main(){

     int age = 20; // declaration + initialization
     float cgpa = 5.0;
     char grade = 'A';
     char name[] = "Moji";
     double x = 45.5667889099999;
     bool e = true;
     char f =100; // for values of -128 to +127 unsigned char g =254 ;//an unsigned char can store value from 0 to +255 any thing above that the compiler 
     // will return zero
     short int h = 5000;// for values of -32 768 to +32 767
     unsigned short int g =60000; // for only positive values of +65 535 
     long long int i = 37373737373737373; // use the format specifier %lld
     unsigned long long int = 3834847474383882939; // use the format specifier %llu
    
    printf("Hello %s \n ",name); // the format specifer used is %s for s as in string 
    printf("You are %d years old \n",age); // %d for decimal 
    printf("Your grade is %c \n ",grade); // %c for char as in character 
    printf("Your cumulative grade point average is %f \n ",cgpa); // %f for float 
    printf("%0.9lf",x);// this lf stands for long float or double , and to specify the numbers of digits the 
    //compiler will print i use the 0. whatever amount of digits, also a double is more accurate than a float
    // since a float has 4 bytes of memory and a double has 8 bytes .
    printf("%d \n",e);
    printf("%d \n",f);
    printf("%d \n ",g);
     return 0;
   }