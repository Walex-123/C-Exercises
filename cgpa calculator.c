#include <stdio.h>
#include <ctype.h>
#include <math.h>
    int main(){

       char MTH102 , MTH104 , CHM102 , CHM104 , PHY102 ,PHY107 ;
       double M102 , M104 , C102 , C104 , P102 ,P107 ;

       printf("Enter your MTH102 GRADE :  ");
       scanf(" %c", &MTH102);
       MTH102 = toupper(MTH102);
            switch (MTH102)
            {
            case 'A':
                M102 = (5*5);
                break;
            case 'B':
                M102 = (4*5);
                break;
            case 'C':
                M102 = (3*5);
                break;
            case 'D':
                M102 = (2*5);
                break;
            case 'E':
                M102 = (1*5);
                break;
            case 'F':
                M102 = (0*5);
                break;
            
            default:
                printf("IS THAT A GRADE !!!!");
                break;
            }

       printf("Enter your MTH104 GRADE :  ");
       scanf(" %C", &MTH104);
       MTH104 = toupper(MTH104);
           switch(MTH104){
                case 'A':
                  M104 = (2*5);
                  break;
                case 'B':
                  M104 = (2*4);
                  break;
                case 'C':
                  M104 = (2*3);
                  break;
                case 'D':
                  M104 = (2*2);
                  break;
                case 'E':
                  M104 = (2*1);
                  break;
                case 'F':
                  M104 = (2*0);
                  break;

                default:
                  printf("IS THAT A GRADE!!!!");
               }

       printf("Enter your CHM102 GRADE :  ");
       scanf(" %c", &CHM102);
       CHM102 = toupper(CHM102);
         switch(CHM102){
             case 'A':
               C102 = (5*4);
               break;
             case 'B':
               C102 = (4*4);
               break;
             case 'C':
               C102 = (3*4);
               break;
             case 'D':
               C102 = (2*4);
               break;
             case 'E':
               C102 = (1*4);
               break;
             case 'F':
               C102 = (0*4);
               break;

             default:
               printf("IS THAT A GRADE !!!!");
           }

       printf("Enter your CHM104 GRADE :  ");
       scanf(" %c", &CHM104);
       CHM104 = toupper(CHM104);
         switch (CHM104)
         {
         case 'A':
             C104 = (1*5);
            break;
         case 'B':
             C104 = (1*4);
            break;
         case 'C':
             C104 = (1*3);
             break;
         case 'D':
             C104 = (1*2);
             break;
         case 'E':
             C102 = (1*1);
             break;
         case 'F':
             C102 = (1*0);
             break;
            
         default:
            printf("IS THAT A GRADE!!!!");
            break;
        }

       printf("Enter your PHY102 GRADE :  ");
       scanf(" %c", &PHY102);
       PHY102 = toupper(PHY102);
          switch (PHY102)
          {
          case 'A':
             P102 = (5*4);
             break;
          case 'B':
             P102 = (4*4);
             break;
          case 'C':
             P102 = (3*4);
             break;
          case 'D':
             P102 = (2*4);
             break;
          case 'E':
             P102 = (1*4);
             break;
          case 'F':
             P102 = (0*4);
             break;
            
          default:
             printf("IS THAT A GRADE!!!!");
            break;
          }
       printf("Enter your PHY107 GRADE :  ");
       scanf(" %c", &PHY107);
       PHY107 = toupper(PHY107);
         switch (PHY107)
         {
         case 'A':
             P107 = (1*5);
             break;
         case 'B':
             P107 = (1*4);
             break;
         case 'C':
             P107 = (1*3);
             break;
         case 'D':
             P107 = (1*2);
             break;
         case 'E':
             P107 = (1*1);
             break;
         case 'F':
             P102 = (1*0);
             break;

         default:
             printf("IS THAT A GRADE!!!!");
            break;
       }
     double cumulative ;
      cumulative = (M102 + M104 + C102 + C104 + P102 + P107);
    
      double cgpa ;
      cgpa = (cumulative/17);
      printf("Your CGPA is %.2lf ",cgpa);

        return 0;
    }