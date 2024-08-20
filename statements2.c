#include <stdio.h>
#include <string.h>
  int main(){

   char name[30];
   printf("Enter a name :  ");
   scanf("%29s",name);

   switch(name){
      case 'yemisi':
          printf("you are the light of the world , a city set upon a hill cannot be hidden");
          break;
      case 'moji':
           printf("you are a kritikos");
           break;
      case 'elizabeth':
           printf("i don't know what to say");
           break;
      case 'david':
           printf("please don't give moji any of your clothes");
           break;
      case 'bukky':
           printf("how's feyi doing");
           break;
      default:
           printf("enter only valid names");
   }
    return 0;
  }
  max 