/*
Title: The EngWizard! ***Welcome to a frosh Engineer's Paradise*** 
Authors: Avellano, Karim and Tan
Description: This program solves most of the engineering problems faced by frosh engineering students. 
Major Learnings: 1. Learning how to separate parts of the code into separate header files.
                 2. Always be patient and composed!! Creating a lengthy program requires a sharp eye and immunity to panic! 
                 3. Review of basic engineering formulas.
                 4. Creating a Menu within a Menu within a Menu and so on...And to be able to exit a program from a subsidiary Menu. 
                 5. Be flexible, always learn and add new bits of knowledge to alreaady exixting knowledge earned in class.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"Area.h"
#include"Trigo.h"
#include"Conversions.h"
#include"Chemistry.h"
#include"Physics.h"
#define pi 3.1416

void MainMenu();




int main()
{     
      int c;
      printf("\t\tWelcome to EngWizard!\n\n");
      printf("Please choose one of the following options from the menu\n\n");
      
      while(1){
      
      MainMenu();
      scanf("%d", &c);
      printf("You selected %d\n", c);
      if(c==1){
             Trigo();
             main();
      }
      if(c==2){
               int x=Area();
               if(x==0) return 0;
               main();
      }
      if(c==3){
               int x=Chem();
               if (x == 0) return 0;
               main();
      }
      if(c==4){
               int x=Phy();
               if (x == 0) return 0;
               main();
      }
      if(c==5){
              int x=Conv();
              if (x==0) return 0;
              main(); 
      }
      if(c==6){
      printf("4.0 for us please :)\nThank you!\n");
      break;
      }
      else{
           printf("Invalid selection\n");
      }
           
      }
      system("pause");
}

void MainMenu(){
       printf("****Main Menu****");
       printf("\n=================================");
       printf("\n 1 - Trigonometry Table of 'Special angles'");
       printf("\n 2 - Perimeter and Area of a polygon");
       printf("\n 3 - Chemistry");
       printf("\n 4 - Physics");
       printf("\n 5 - Useful conversions");
       printf("\n 6 - EXIT\n\n");
       }
