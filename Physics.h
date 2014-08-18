int Phy();
void Acc();
void Fall();
void Vec();
void Pot();
void Work();
void PMenu();

int Phy(){
    char c;
     while(1){
       getchar();
       PMenu();
       scanf("%c",&c);

       switch(c)
       {
           case 'A':case 'a':
                    Acc();
                    break; 

           case 'B':case 'b':
                    Fall();
                    break; 

           case 'C':case 'c':
                    Vec();
                    break; 

           case 'D':case 'd':
                    Pot();
                    break; 

           case 'E':case 'e':
                    Work();
                    break;
           case 'F':case 'f':
                    break; 
           case 'Q':case 'q':
                    return 0;
           
           
                

           default:
                    printf("\n Invalid selection");
                    return Conv();
        }

                
        if (c == 'F' || c == 'f') break;
        
     
     }
}




void PMenu(){
     printf("***Physics Menu***\n");
     printf("===========================\n");
     printf("A - Kinematics for constant Acceleration\n");
     printf("B - Kinematics of Free Fall\n");
     printf("C - Multiplication of Verctors\n");
     printf("D - Potential Energy\n");
     printf("E - Work Done\n");
     printf("F - Return to EngWizard\n");
     printf("Q - Quit to Windows\n");
     printf("Please select your option:\n\n");
}

void Acc(){
     int choice;
printf ("**** Constant Acceleration***\n");
//printf ("MENU: Constant Acceleration\n");
printf ("1. Solve for Acceleration\n");
printf ("2. Solve for Final Velocity \n");
printf ("3. Solve for Initial Velocity \n");
printf ("4. Solve for Time \n");
printf ("5. Solve for Initial position \n");
printf ("6. Solve for Final position\n");
printf ("7. Go back to Physics Menu\n");
scanf ("%d", &choice);
printf ("Your choice is %d\n", choice);
if (choice==1)
{
printf ("Solve for Acceleration \n");
float a, Vf, Vi, t, xf, xi, s;
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (xi): \n");
scanf ("%f", &xi);
printf ("Enter the Final position (xf): \n");
scanf ("%f", &xf);
s= xf - xi;
if (s == 0)
{
a = (Vf-Vi)/t;
}
else if ((s != 0 && t!=0) && Vi != 0)
{
a = (2*(s)-(Vi*t))/t*t;
}
if(t == 0 && s!= 0){
     a = (Vf*Vf-Vi*Vi)/(2*s);
}
if(Vi == 0){
      a = (Vf*t-s)*2/(t*t);
}
printf ("The acceleration is %.2f\n", a);
Acc();
}
else if (choice==2){
printf ("Solve for Final Velocity \n");
float Vf, Vi, a, t, xf, xi, s;
printf ("Enter the Acceleration (a): \n");
scanf ("%f", &a);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (xi):\n");
scanf ("%f", &xi);
printf ("Enter the Final position (xf): \n");
scanf ("%f", &xf);
s = xf - xi;
 
if (s==0){
Vf = Vi + (a*t);
}
else if (s != 0 && t!=0 && Vi!=0){
Vf = ( (2 * (s) )/ t) - Vi;
}
if((s!=0 && t==0)&& Vi!=0){
        Vf = sqrt(Vi*Vi + 2*a*s);
}
if(s!=0 && Vi==0){
        Vf = (s + 0.5*a*t*t)/t;
}
printf (" The Final Velocity is %.2f \n", Vf);
Acc();
}
else if (choice==3){
printf ("Solve for Initial Velocity \n");
float Vf, Vi, a, t, xf, xi,s;
printf ("Enter the Acceleration (a): \n");
scanf ("%f", &a);
printf ("Enter the Final Velocity (Vi): \n");
scanf ("%f", &Vf);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (xi): \n");
scanf ("%f", &xi);
printf ("Enter the Final position(xf): \n");
scanf ("%f", &xf);
s = xf - xi;
if (s == 0){
Vi = Vf - (a*t);
}
else if (s != 0 && Vf != 0){
Vi = sqrt((Vf*Vf)-(2*a)*(s));
}
if(s != 0 && Vf == 0){
     Vi = (s - 0.5*a*t*t)/t;
}
printf (" The Initial Velocity is %.2f \n", Vi);
Acc();
}
else if (choice==4)
{
printf ("Solve for Time \n");
float Vf, Vi, a, t, xf, xi, s;
printf ("Enter the Acceleration (a): \n");
scanf ("%f", &a);
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Initial position(xi): (\n");
scanf ("%f", &xi);
printf ("Enter the Final position (xf): \n");
scanf ("%f", &xf);
s = xf - xi;
 
if (s== 0){
t = Vf - Vi / a;
}
else if (s != 0 && a == 0){
t = 2* (xf - xi) / (Vi + Vf);
}
if(s != 0 && Vf == 0 && a!=0){
     t = (sqrt(Vi*Vi + 2*a*s)-Vi)/a;
}
if(s != 0 && Vi == 0 && a!=0){
     t = (sqrt(Vf*Vf - 2*a*s)+ Vf)/a;
}
printf (" The Time is %.2f \n", t);
Acc();
}
else if (choice==5)
{
printf ("Solve for Initial position \n");
float Vf, Vi, a, t, xf, xi;
printf ("Enter the Acceleration (a): \n");
scanf ("%f", &a);
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Final position (xf): \n");
scanf ("%f", &xf);
if (Vf== 0){
xi = - ( Vi * t ) +  (a * t * t) /2  - xf;
}
else if (Vf != 0){
xi = - ( t * ( Vi + Vf ) /2 ) - xf;}


printf (" The Initial position is %.2f \n", xi);
Acc();
}
else if (choice==6)
{
printf ("Solve for Final position \n");
float Vi, a, t, xi, xf, Vf;
printf ("Enter the Acceleration (a): \n");
scanf ("%f", &a);
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (xi): \n");
scanf ("%f", &xi);
if (Vf== 0){
xf = xi + ( Vi * t ) +  (a * t * t) /2  ;
}
else if (Vf != 0){
xf =  ( t * ( Vi + Vf ) /2 ) + xi;}
printf (" The Final position is %.2f \n", xf);
Acc(); 
}
if(choice==7) Phy();
else {
printf("Invalid Input\n");
Acc();
}
}



void Fall(){
     int choice;
printf ("**** Free Fall***\n");
//printf ("MENU: Free Fall\n");
printf ("1. Solve for Final Velocity \n");
printf ("2. Solve for Initial Velocity \n");
printf ("3. Solve for Time \n");
printf ("4. Solve for Initial position \n");
printf ("5. Solve for Final position\n");
printf ("6. Go back to Physics Menu\n");
scanf ("%d", &choice);
printf ("Your choice is %d\n", choice);

if (choice==1){
printf ("Solve for Final Velocity \n");
float Vf, Vi, t, yf, yi, s, g;
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (yi):\n");
scanf ("%f", &yi);
printf ("Enter the Final position (yf): \n");
scanf ("%f", &yf);
s = yf - yi;
g = -9.8; 
if (yi == 0 && yf == 0){
Vf = Vi + (g*t);
}
else if (s != 0){
Vf = ( (2 * (s) )/ t) - Vi;
}
printf (" The Final Velocity is %.2f \n", Vf);
Fall();
}
else if (choice==2){
printf ("Solve for Initial Velocity \n");
float Vf, Vi, g, t, yf, yi,s;
printf ("Enter the Final Velocity (Vi): \n");
scanf ("%f", &Vf);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (yi): \n");
scanf ("%f", &yi);
printf ("Enter the Final position(yf): \n");
scanf ("%f", &yf);
s = yf - yi;
if (s == 0){
Vi = Vf - (g*t);
}
else if (s != 0){
Vi = sqrt((Vf*Vf)-(2*(g))*(s));}
printf (" The Initial Velocity is %.2f \n", Vi);
Fall();
}
else if (choice==3)
{
printf ("Solve for Time \n");
float Vf, Vi, g, t, yf, yi, s;
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Initial position(yi): (\n");
scanf ("%f", &yi);
printf ("Enter the Final position (yf): \n");
scanf ("%f", &yf);
s = yf - yi;
g = -9.8;
if (s== 0){
t = Vf - Vi / g;
}
else if (s != 0){
t = 2* (yf - yi) / (Vi + Vf);}
printf (" The Time is %.2f \n", t);
Fall();
}
else if (choice==4)
{
printf ("Solve for Initial position \n");
float Vf, Vi, g, t, yf, yi;
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Final position (yf): \n");
scanf ("%f", &yf);
g = -9.8;
if (Vf== 0){
yi = - ( Vi * t ) - (g * t * t) /2  - yf;
}
else if (Vf != 0){
yi = - ( t * ( Vi + Vf ) /2 ) - yf;}


printf (" The Initial position is %.2f \n", yi);
Fall();
}
else if (choice==5)
{
printf ("Solve for Final position \n");
float Vi, y, t, yi, yf, Vf, g;
printf ("Enter the Final Velocity (Vf): \n");
scanf ("%f", &Vf);
printf ("Enter the Initial Velocity (Vi): \n");
scanf ("%f", &Vi);
printf ("Enter the Time (t): \n");
scanf ("%f", &t);
printf ("Enter the Initial position (yi): \n");
scanf ("%f", &yi);
g = -9.8;
if (Vf== 0){
yf = yi + ( Vi * t ) +  (g * t * t) /2  ;
}
else if (Vf != 0){
yf =  ( t * ( Vi + Vf ) /2 ) + yi;}
printf (" The Final position is %.2f \n", yf);
Fall(); 
}
if(choice==6) Phy();
else {
printf("Invalid Input\n");
Fall();
}
}


void Vec(){
    int choice;
printf ("****Multiplication of Vectors***\n");
//printf ("MENU: Multiplication of Vectors\n");
printf ("1. Solve for Scalar Product (Dot Product of Coordinates)\n");
printf ("2. Solve for Vector Product (Cross Prodct of Coordinates) \n");
printf ("3. Solve for Scalar Product (Dot Product of Vectors)\n");
printf ("4. Solve for Vector Product (Cross Prodct of Vectors) \n");
printf ("5. Go back to Physics Menu\n");
scanf ("%d", &choice);
printf ("Your choice is %d\n", choice);
if (choice==1)
{
printf ("Solve for Scalar Product (Dot Product of Coordinates) \n");
float A, a, B, b, C, c,D;
printf ("Enter the x-coordinate of Vector A \n");
scanf ("%f", &A);
printf ("Enter the y-coordinate of Vector A\n");
scanf ("%f", &B);
printf ("Enter the z-coordinate of Vector A\n");
scanf ("%f", &C);
printf ("Enter the x-coordinate of Vector B\n");
scanf ("%f", &a);
printf ("Enter the y-coordinate of Vector B\n");
scanf ("%f", &b);
printf ("Enter the z-coordinate of Vector B\n");
scanf ("%f", &c);
D = (A * a) + (B * b) + (C * c) ;
printf ("A · B = %.2f\n", D);
Vec();
}
else if (choice==2)
{
printf ("Solve for Vector Product (Cross Product of Coordinates) \n");
float A, a, B, b, C, c, CPI, CPJ, CPK;
printf ("Enter the x-coordinate of Vector A \n");
scanf ("%f", &A);
printf ("Enter the y-coordinate of Vector A\n");
scanf ("%f", &B);
printf ("Enter the z-coordinate of Vector A\n");
scanf ("%f", &C);
printf ("Enter the x-coordinate of Vector B\n");
scanf ("%f", &a);
printf ("Enter the y-coordinate of Vector B\n");
scanf ("%f", &b);
printf ("Enter the z-coordinate of Vector B\n");
scanf ("%f", &c);
CPI = (B * c) - (C * b);
CPJ = (C * a) - (A * c);
CPK = (A * b) - (B * a);
printf ("A x C = ( %.2f i , %.2f j , %.2f k ) \n", CPI, CPJ, CPK);
Vec(); 
}
else if (choice==3)
{
printf ("Solve for Solve for Scalar Product (Dot Product of Vectors)\n"); 
float a, b, vd, A, t;
printf ("Enter vector A\n");
scanf ("%f", &a);
printf ("Enter vector B\n");
scanf ("%f", &b);
printf ("Enter the angle (in degrees) between the vectors\n");
scanf ("%f", &t);
A = t*pi/180;
vd = fabs(a)*fabs(b)*cos (A);
printf ("A.B = %.2f\n", vd);
Vec(); 
}
else if (choice==4)
{
   printf ("Solve for Solve for Vecror Product (Cross Product of Vectors) \n"); 
   float a, b, vc, t, A;
   printf ("Enter vector A\n");
    scanf ("%f", &a);
   printf ("Enter vector B\n");
    scanf ("%f", &b);
   printf ("Enter the angle (in degrees) between the vectors\n");
    scanf ("%f", &t);
          A = t*pi/180;
          vc= fabs(a)*fabs(b)*sin (A);
          printf ("A x B = %.2f\n", vc);
 
Vec(); 
}
if(choice==5) Phy();
else {
     printf("Invalid Input\n");
     Vec();
} 
}


void Pot(){
     int choice;
printf ("****Potential Energy***\n");
//printf ("MENU: Potential Energy and Energy Conservation\n");
printf ("1. Solve for Gravitational Potential Energy\n");
printf ("2. Solve for Elastic Potential Energy \n");
printf ("3. Go back to Physics Menu\n");
scanf ("%d", &choice);
printf ("Your choice is %d\n", choice);
if (choice==1)
{
printf ("Solve for Gravitational Potential Energy \n");
float U, m, g, y, t;
printf ("Enter the mass (m): \n");
scanf ("%f", &m);
printf ("Enter the Displacement (y): \n");
scanf ("%f", &y);
g = -9.8;
U = m * g * y;

printf ("The work Gravitational Potential Energy is %.2f J \n", U);
Pot();
} 
else if (choice==2){
printf ("Solve for Elastic Potential Energy \n");
float U, k, x;
printf ("Enter the force constant (k): \n");
scanf ("%f", &k);
printf ("Enter the displacement of the object: \n");
scanf ("%f", &x);

U = k * x * x / 2;

printf (" The Total Work of the system is %.2f \n", U);
Pot();
}
if(choice==3) Phy();
else {
printf("Ïnvalid Input\n");
Pot();
}
}



void Work(){
     int choice;
printf ("****Work and Kinetic Energy***\n");
//printf ("MENU: Work and Kinetic Energy\n");
printf ("1. Solve for Work\n");
printf ("2. Solve for Kinetic Energy \n");
printf ("3. Solve for Total Work \n");
printf ("4. Solve using Hooke's Law \n");
printf ("5. Solve for Power \n");
printf ("6. Go back to Physics Menu\n");
scanf ("%d", &choice);
printf ("Your choice is %d\n", choice);
if (choice==1)
{
printf ("Solve for Work \n");
float W, F, d, t;
printf ("Enter the Force (F): \n");
scanf ("%f", &F);
printf ("Enter the Displacement (d): \n");
scanf ("%f", &d);
printf ("Enter the Angle in degrees: \n");
scanf ("%f", &t);
if (t == 0)
{
W = F*d;
}
else if (t != 0)
{
W = F*d*cos (t*pi/180);
}
printf ("The work done by the system is %.2f J \n", W);
Work();
} 
else if (choice==2){
printf ("Solve for Kinetic Energy \n");
float K, m, v;
printf ("Enter the Mass of the object (m): \n");
scanf ("%f", &m);
printf ("Enter the Velocity of the object (v): \n");
scanf ("%f", &v);

K = m * v * v / 2;
 
printf (" The Kinetic Energy of the system is %.2f \n", K);
Work();
}
else if (choice==3){
printf ("Solve for Total Work \n");
float TW, K1, K2, m1, m2, v1, v2;
printf ("Enter the Mass of the first object: \n");
scanf ("%f", &m1);
printf ("Enter the Velocity of the first object: \n");
scanf ("%f", &v1);
printf ("Enter the Mass of the second object: \n");
scanf ("%f", &m2);
printf ("Enter the Velocity of the second object:\n");
scanf ("%f", &v2);

K1 = (m1 * v1 * v1) / 2;
K2 = (m2 * m2 * m2) /2;
TW = K2 - K1;

printf (" The Total Work of the system is %.2f \n", TW);
Work();
}
else if (choice==4){
printf ("Solve using Hooke's Law \n");
float TW, k1, k2, x1, x2;
printf ("Enter the foce constant (k) of the first object: \n");
scanf ("%f", &k1);
printf ("Enter the force constant (k) of the second object: \n");
scanf ("%f", &k2);
printf ("Enter the displacement of the first object: \n");
scanf ("%f", &x1);
printf ("Enter the displacement of the second object:\n");
scanf ("%f", &x2);

TW =  k1 * x1 * x1 / 2 +  k2 * x2 * x2 /2 ;


printf (" The Total Work of the system is %.2f \n", TW);
Work();
}
else if (choice==5){
printf ("Solve for Power \n");
float P, F, v;
printf ("Enter the Force (F): \n");
scanf ("%f", &F);
printf ("Enter the Velocity (v): \n");
scanf ("%f", &v);

P = F * v;

printf ("The power of the system is %.2f W \n", P);
Work(); 
}
if(choice==6) Phy();

else {
printf("Invalid Input\n");
Work();
}

}
