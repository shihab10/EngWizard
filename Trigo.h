#include<math.h>
#define pi 3.1416

void Trigo();

/*
void Trigo(){
     int i;
     float A;
     printf("  Angle (A)\t     sin A\t     cos A\t     tanA\n");
     for(i = 0; i < 6; i++){
           //if(i == 3 || i == 9){
             //   tan(A) = "undef"
               // }
           A = (pi/12)*i;
           printf("%10.0f \t%10.3f \t%10.3f \t%10.3f\n\n", A*180/pi, sin(A), cos(A), tan(A));
           }
     for(i=6; i<7; i++){
              A = (pi/12)*i;
              printf("%10.0f \t%10.3f \t%10.3f \t   Undefined\n\n", A*180/pi, sin(A), cos(A));
              }
     for(i = 7; i < 18; i++){
           
           A = (pi/12)*i;
           printf("%10.0f \t%10.3f \t%10.3f \t%10.3f\n\n", A*180/pi, sin(A), cos(A), tan(A));
           } 
     for(i=18; i<19; i++){
              A = (pi/12)*i;
              printf("%10.0f \t%10.3f \t%10.3f \t   Undefined\n\n", A*180/pi, sin(A), cos(A));
              }
     for(i = 19; i < 25; i++){
           
           A = (pi/12)*i;
           printf("%10.0f \t%10.3f \t%10.3f \t%10.3f\n\n", A*180/pi, sin(A), cos(A), tan(A));
           }
     }
*/

//This is a better code!!
void Trigo(){
     printf("  Angle (A)\t     sin A\t     cos A\t     tan A\n");
     printf("---------------------------------------------------------------\n");
     int i; float A, j=0;
     for (i=0; i < 361; i++){
          if ((i%30==0 || i%45==0) && (i!=90 && i!=270)) {
                  A = j*pi/180; 
                  printf("%10.0f \t%10.3f \t%10.3f \t%10.3f\n\n", j, sin(A), cos(A), tan(A));
           }
           if (i==90 || i == 270){
                  A = j*pi/180; 
                  printf("%10.0f \t%10.3f \t%10.3f \t   Undefined\n\n", j, sin(A), cos(A));
           }
           j++;
      }
}
