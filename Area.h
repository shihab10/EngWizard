#define pi 3.1416

int Area();
void Polygon();
void Circle();
void Regular();
void Irregular();



int Area(){
     char shape;
     printf("***Area/Perimeter***\n\n");
     printf("Is your polygon a circle?\nPlease answer Y or N\nE to return to Engwizard\nQ to Quit\n\n");
     while(1){
     
     getchar();
     scanf("%c", &shape);
          switch(shape){
          case 'N':case 'n':
               Polygon();
               //getchar();
               break;
          case 'Y':case 'y':
               Circle();
               //getchar();
               break;
          case 'E':case'e':
               break;
          case 'Q':case'q':
               return 0;
          default:
               printf("Please selece N or Y!\n");
               return Area();
          }
       //getchar();
       if(shape == 'E' || shape == 'e')
       break;   
     }
          
}
     
     
void Polygon(){
     char c;
     printf("Is your polygon regular? Y/N?\n");
     getchar();
     scanf("%c", &c);
     
     switch(c){
          case 'N':case 'n':
               Irregular();
               //Area();
               break;
          case 'Y':case 'y':
               Regular();
               //Area();
               break;
          default:
               printf("Please selece N or Y!\n");
               return Polygon();
               }
     }

void Regular(){
     int n;
     printf("Enter the number of sides of the regular polygon\n");
     scanf("%d", &n);
     float a;
     float b, A, P;
     printf("Enter the length of the sides of your regular polygon\n");
     scanf("%f",&a);
     b = a*a*(2 - 2*cos(2.0*pi/n));
     A = (n/2)*b*sin(2*pi/n);
     P = n*a;
     printf("The area is %.2f\n", A);
     printf("The perimeter is %.2f\n", P);
     }
     
void Irregular(){
     int n;
     printf("Enter the number of sides/vertices of the regular polygon\n");
     scanf("%d", &n);
     printf("***Please note that this method requires the input of co-ordinates of vertices***\n");
     printf("NOTE: Enter the co-ordinates in clockwise direction!!!\n");
     
     int datax[n], datay[n];
     
     int i;
	 for(i = 0; i < n; i++) {
		printf("Enter Co-ordinate of x #%d: ", i+1);
	    scanf("%d", &datax[i]);
    }
     int j;
	 for(j = 0; j < n; j++) {
		printf("Enter Co-ordinate of y #%d: ", j+1);
	    scanf("%d", &datay[j]);
    }
    float area = 0, AREA;
    int l;
    int k = n - 1;
    for (l=0; l < n; l++)
    { area = area +  (datax[k]+datax[l]) * (datay[k]-datay[l]); 
      k = l; 
    }
    float perimeter=0;
    int m;
    int p = n - 1;
    for (m = 0; m < n; m++)
    {
        perimeter = perimeter*1.0 + sqrt(((datax[m]-datax[p])*(datax[m]-datax[p]))+((datay[m]-datay[p])*(datay[m]-datay[p])))*1.0;
        p = m;
        }
    AREA = area/2.0;
    printf("The area of the polygon is %.2f\n", AREA);
    printf("The perimeter of the polygon is %.2f\n", perimeter);
     }
     
void Circle(){
     float r, A, P;
     printf("Enter the radius\n");
     scanf("%f", &r);
     A = pi*r*r;
     P = 2*pi*r;
     printf("The area of the circle is %.2f\n", A);
     printf("The perimeter of the circle is %.2f\n", P);
     }



