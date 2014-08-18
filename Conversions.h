int Conv();
void Temp();
void Mass();
void Distance();
void Pressure();
void Menu();

int Conv(){
     char c;
     while(1){
       getchar();
       Menu();
       scanf("%c",&c);

       switch(c)
       {
           case 'A':case 'a':
                     Temp();
                     break; 

           case 'B':case 'b':
                     Mass();
                     break; 

           case 'C':case 'c':
                    Distance();
                    break; 

           case 'D':case 'd':
                    Pressure();
                    break; 

           case 'E':case 'e':
                    break; 
           case 'Q':case 'q':
                    return 0;
           
           
                

           default:
                    printf("\n Invalid selection");
                    return Conv();
        }

                
        if (c == 'E' || c == 'e') break;
        
     
     }
}


void Menu(){
     printf("\nWhat would you like to convert?\n");
     printf("--------------------------------------\n");
     printf("A - Temperature\n");
     printf("B - Mass\n");
     printf("C - Distance\n");
     printf("D - Pressure\n");
     printf("E - Return to EngWizard\n");
     printf("Q - EXIT to Windows \n");
     printf("Please select your option!\n");
}

void Temp(){
     /*
     int a;
     float C, F;
     printf("Select your temp conversion:\n\n");
     printf("1 - Fahrenheit to Celsius\n");
     printf("2 - Celsius to Fahrenheit\n");
     scanf("%d",&a);
     if(a==1){
              printf("Enter the temperature in Fahrenheit\n");
              scanf("%f", &F);
              C = (F - 32)*5/9;
              printf("The Celsius equivalent is %.2f\n", C);
     }
     if(a==2){
              printf("Enter the temperature in Celsius\n");
              scanf("%f", &C);
              F = C*9/5 + 32;
              printf("The Fahrenheit equivalent is %.2f\n", F);
     }
     else{ 
           printf("Invalid Input, please try again\n");
     }
     
     */
     int selection;

printf("Select your temperature conversion: \n");
       printf("1- Celsius to Farenheit\n");
       printf("2- Farenheit to Celsius\n");
       printf("3- Celsius to Kelvin\n");
       printf("4- Kelvin to Celsius\n");
       printf("5- Farenheit to Kelvin\n");
       printf("6- Kelvin to Farenheit\n");
       scanf("%d", &selection);
      printf("You selected: %d\n", selection);


       if (selection==1)
       {

        float c,f;
		printf("Celsius to Farenheit\n");
       printf("Enter Celsius:\n");
       scanf("%f", &c);
       f=9.0/5.0*c+32; 
       printf("The celsius %.2f is equal to: %.2f farenheit\n", c, f);
   }
       else if (selection==2)
       {

       float f, c;
       printf("Enter Farenheit:\n");
       scanf("%f", &f);
       c=(f-32)*5.0/9.0; 
       printf("The farenheit %.2f is equal to: %.2f celsius\n", f, c);
   }

       else if (selection==3)
       {

      float c,k;
	   printf("Celcius to Kelvin\n");
       printf("Enter Celcius:\n");
       scanf("%f", &c);
       k=c+273.15;
       printf("The celcius %.2f is equal to: %.2f kelvin\n", c, k);
   }
       else if (selection==4)
       {

       float k, c;
       printf("Kelvin to Celcius\n");
       printf("Enter Kelvin\n");
       scanf("%f", &k);
       c=k-273.15;
       printf("The kelvin %.2f is equal to: %.2f celcius\n", k, c);
   }
       else if (selection==5)
       {

       float f,k,c;
       printf("Farenheit to Kelvin\n");
	   printf("Enter Farenheit\n");
	   scanf("%f", &f);
	   c=(f-32)*5.0/9.0; 
	   k=c+273.15;
	   printf("The farenheit %.2f is equal to: %.2f kelvin\n", f, k);
}
	   else if (selection==6)
	   {
	
	   float k,f;
	   printf("Kelvin to Farenheit\n");
	   printf("Enter Kelvin\n");
	   scanf("%f", &k);
	   f=1.8*(k-273.15)+32;
	   printf("The kelvin %.2f is equal to: %.2f farenheit\n", k, f);
   }

       else 
       printf("Invalid Input\n");
       
}

void Mass(){
     int a;
     float P, K, o, g;
     printf("Select your mass conversion:\n\n");
     printf("1 - Pounds to Kilograms\n");
     printf("2 - Kilograms to Pounds\n");
     printf("3 - Oz to Grams\n");
     printf("4 - Grams to Oz\n");
     scanf("%d",&a);
     if(a==1){
              printf("Enter the mass in Pounds\n");
              scanf("%f",&P);
              K = P/2.2046;
              printf("The mass in Kilograms is %.2f\n",K);
     }
     if(a==2){
              printf("Enter the mass in Kilograms\n");
              scanf("%f",&K);
              P = K*2.2046;
              printf("The mass in Pounds is %.2f\n",P);
     }
     if(a==3){
              printf("Enter the mass in Ounces\n");
              scanf("%f",&o);
              g = o*28.35;
              printf("The mass in Grams is %.2f\n",g);
     }
     if(a==4){
              printf("Enter the mass in Grams\n");
              scanf("%f",&g);
              o = g/28.35;
              printf("The mass in Ounces is %.2f\n",o);
     }
     else{
          printf("Invalid Input, PLease try again\n");
     }
}
     
void Distance(){
     int a;
     float M, K, f, m, i, c;
     printf("Select your distance conversion:\n\n");
     printf("1 - Miles to Kilometers\n");
     printf("2 - Kilometers to Miles\n");
     printf("3 - Feet to Meters\n");
     printf("4 - Meters to Feet\n");
     printf("5 - Inches to Centimeter\n");
     printf("6 - Centimeters to Inches\n");
     scanf("%d", &a);
     if(a==1){
              printf("Enter the distance in Miles\n");
              scanf("%f", &M);
              K = 1.609*M;
              printf("The distance in Kilometers is %.2f\n", K);
     }
     if(a==2){
              printf("Enter the distance in Kilometers\n");
              scanf("%f", &K);
              M = K/1.609;
              printf("The distance in Miles is %.2f\n", M);
     }
     if(a==3){
              printf("Enter the distance in Feet\n");
              scanf("%f", &f);
              m = 0.305*f;
              printf("The distance in Meters is %.2f\n", m);
     }
     if(a==4){
              printf("Enter the distance in Meters\n");
              scanf("%f", &m);
              f = m/0.305;
              printf("The distance in Feet is %.2f\n", f);
     }
     if(a==5){
              printf("Enter the distance in Inches\n");
              scanf("%f", &i);
              c = 2.54*i;
              printf("The distance in Centimeters is %.2f\n", c);
     }
     if(a==6){
              printf("Enter the distance in Centimeters\n");
              scanf("%f", &c);
              i = c/2.54;
              printf("The distance in Inches is %.2f\n", i);
     }
     else{
          printf("Invalid Input, PLease try again\n");
     }
}     
     
void Pressure(){
     int a;
     float A, P, m;
     printf("Select your pressure conversion:\n\n");
     printf("1 - Pascals to atm\n");
     printf("2 - atm to Pascals\n");
     printf("3 - Pascals to mmHg\n");
     printf("4 - mmHg to Pascals\n");
     scanf("%d", &a);
     if(a==1){
              printf("Enter the pressure in Pascals\n");
              scanf("%f", &P);
              A = P/101325;
              printf("The pressure in Atmospheres is %.2f\n", A);
     }
     if(a==2){
              printf("Enter the pressure in Atmospheres\n");
              scanf("%f", &A);
              P = A*101325;
              printf("The pressure in Pascals is %.2f\n", P);
     }
     if(a==3){
              printf("Enter the pressure in Pascals\n");
              scanf("%f", &P);
              m = P/133.3224;
              printf("The pressure in mmHg is %.2f\n", m);
     }
     if(a==4){
              printf("Enter the pressure in mmHg\n");
              scanf("%f", &m);
              P = m*133.3224;
              printf("The pressure in Pascals is %.2f\n", P);
     }
     else{
          printf("Invalid Input, PLease try again\n");
     }
}
