int Chem();
void CMenu();
void CMass();
void Gas();
void Solution();
void Tables();


int Chem(){
       
       int c;
     while(1){
       CMenu();
       scanf("%d",&c);

       switch(c)
       {
           case 1:
                     CMass();
                     break; 

           case 2:
                     Gas();
                     break; 

           case 3:
                    Solution();
                    break; 

           case 4:
                    Tables();
                    break; 

           case 5:
                    break; 
           case 6:
                    return 0;
                

           default:
                    printf("\n Invalid selection\n");
                    return Chem();
        }

                
        if (c == 5) break;
        
     
     }
}

void CMenu(){
     printf("\nMenu:CHEMISTRY\n");
     printf("=======================================\n");
     printf(" 1 - SOLVE FOR PROTON,ELECTRON, NEUTRON, ATOMIC NUMBER AND ATOMIC MASS\n");
     printf(" 2 - GAS LAWS\n");
     printf(" 3 - SOLUTION CONCENTRATIONS\n");
     printf(" 4 - TABLES\n");
     printf(" 5 - GO BACK TO ENGWIZARD\n");
     printf(" 6 - ***EXIT****\n");
     printf("=======================================\n");
     printf("\n Enter selection: \n");
}
void CMass(){
     int selection;
	
	printf("\nMenu: Solving for proton, electron, neutron, atomic number and atomic mass\n");
	printf("1-Solve for the number of protons given number of electrons\n");
	printf("2-Solve for the number of protons given atomic number\n");
	printf("3-Solve for the number of protons given number of neutron and atomic mass\n");
	printf("4-Solve for the number of electrons given atomic number\n");	
	printf("5-Solve for the number of electrons given number of protons\n");
	printf("6-Solve for the number of electrons given number of neutrons and atomic mass\n");
	printf("7-Solve for the number of neutrons given atomic mass and atomic number\n");
	printf("8-Solve for the number of neutrons given atomic mass and number of protons\n");
	printf("9-Solve for the number of neutrons given atomic mass and number of electrons\n");
	printf("10-Solve for atomic mass of an element given neutron and atomic number\n");
	printf("11-Solve for atomic mass of an element given neutron and number of protons\n");
	printf("12-Solve for atomic mass of an element given neutron and number of electrons\n");
	printf("13-Solve for atomic number of an element given atomic mass and neutron\n");
	printf("14-Solve for atomic number of an element given number of protons\n");
	printf("15-Solve for atomic number of an element given number of electrons\n");
	
	printf("Enter selection\n");
	scanf("%d", &selection);
	printf("You selected:%d\n", selection);
	
	if (selection==1)
	{

	int p,e;
	
	printf("SOLVE FOR THE NUMBER OF PROTONS GIVEN NUMBER OF ELECTRONS\n");
	printf("Enter number of electrons\n");
	scanf("%d", &e);
	p=e;
	printf("The number of protons is:%.2d\n", p);
}
 else if (selection==2)
	{

	int p,anumber;
	
	printf("SOLVE FOR THE NUMBER OF PROTONS GIVEN ATOMIC NUMBER\n");
	printf("Enter atomic number\n");
	scanf("%d", &anumber);
	p=anumber;
	printf("The number of protons is:%.2d\n", p);
}

else if (selection==3)
	{

	int p,n, amass;
	
	printf("SOLVE FOR THE NUMBER OF PROTONS GIVEN NUMBER OF NEUTRONS AND ATOMIC MASS\n");
	printf("Enter number of neutrons\n");
	scanf("%d", &n);
	printf("Enter atomic mass\n");
	scanf("%d", &amass);
	p=amass-n;
	printf("The number of protons is:%.2d\n", p);
}

else if (selection==4)
	{
	

	int e,anumber;
	
	printf("SOLVE FOR THE NUMBER OF ELECTRONS GIVEN ATOMIC NUMBER\n");
	printf("Enter atomic number\n");
	scanf("%d", &anumber);
	e=anumber;
	printf("The number of electrons is:%.2d\n", e);
}


else if (selection==5)
	{
	

	int e,p;
	
	printf("SOLVE FOR THE NUMBER OF ELECTRONS GIVEN NUMBER OF PROTONS\n");
	printf("Enter number of protons\n");
	scanf("%d", &p);
	e=p;
	printf("The number of electrons is:%.2d\n", e);
}

else if (selection==6)
	{
	

	int e,n,amass;
	
	printf("SOLVE FOR THE NUMBER OF ELECTRONS GIVEN NUMBER OF NEUTRONS AND ATOMIC MASS\n");
	printf("Enter number of neutrons\n");
	scanf("%d", &n);
	printf("Enter atomic mass\n");
	scanf("%d", &amass);
	e=amass-n;
	printf("The number of electrons is:%.2d\n", e);
}



	else if (selection==7)
	{

		int anumber,n, amass;
		
		printf("SOLVE FOR THE NUMBER OF NEUTRONS GIVEN ATOMIC MASS AND ATOMIC NUMBER\n");
		printf("Enter atomic mass\n");
		scanf("%d", &amass);
		printf("Enter atomic number\n");
		scanf("%d", &anumber);
		n=amass-anumber;
		printf("The number of neutron is:%.2d\n",n);
		
	}	
	
	else if (selection==8)
	{

		int p,n, amass;
		
		printf("SOLVE FOR THE NUMBER OF NEUTRONS GIVEN ATOMIC MASS AND NUMBER OF PROTONS\n");
		printf("Enter atomic mass\n");
		scanf("%d", &amass);
		printf("Enter number of protons\n");
		scanf("%d", &p);
		n=amass-p;
		printf("The number of neutron is:%.2d\n",n);
		
	}	
	
	else if (selection==9)
	{

		int e,n, amass;
		
		printf("SOLVE FOR THE NUMBER OF NEUTRONS GIVEN ATOMIC MASS AND NUMBER OF ELECTRONS\n");
		printf("Enter atomic mass\n");
		scanf("%d", &amass);
		printf("Enter number of electrons\n");
		scanf("%d", &e);
		n=amass-e;
		printf("The number of neutron is:%.2d\n",n);
		
	}	
	
   else if (selection==10)
	{
	
		int amass,n, anumber;
		
		printf("SOLVE FOR ATOMIC MASS OF AN ELEMENT GIVEN NEUTRON AND ATOMIC NUMBER\n");
		printf("Enter number of neutrons\n");
		scanf("%d",&n);
		printf("Enter atomic number\n");
		scanf("%d",&anumber);
		amass=n+anumber;
		printf("The atomic mass is equal to:%.2d\n", amass);
		
	}
	else if (selection==11)
	{
	
		int amass,n, p;
		
		printf("SOLVE FOR ATOMIC MASS OF AN ELEMENT GIVEN NEUTRON AND NUMBER OF PROTONS\n");
		printf("Enter number of neutrons\n");
		scanf("%d",&n);
		printf("Enter number of protons\n");
		scanf("%d",&p);
		amass=n+p;
		printf("The atomic mass is equal to:%.2d\n", amass);
		
	}
		else if (selection==12)
	{
	
		int amass,n, e;
		
		printf("SOLVE FOR ATOMIC MASS OF AN ELEMENT GIVEN NEUTRON AND NUMBER OF ELECTRONS\n");
		printf("Enter number of neutrons\n");
		scanf("%d",&n);
		printf("Enter number of electrons\n");
		scanf("%d",&e);
		amass=n+e;
		printf("The atomic mass is equal to:%.2d\n", amass);
		
	}
	
	else if (selection==13)
	{
		int amass,anumber,n;
		
		printf("SOLVE FOR ATOMIC NUMBER OF AN ELEMENT GIVEN NUMBER OF NEUTRONS AND ATOMIC MASS\n");
		printf("Enter number of neutrons\n");
		scanf("%d", &n);
		printf("Enter Atomic mass\n");
		scanf("%d", &amass);
		anumber=amass-n;
		printf("The Atomic number is equal to:%.2d\n", anumber);
}
else if (selection==14)
	{
		int p,anumber;
		
		printf("SOLVE FOR ATOMIC NUMBER OF AN ELEMENT GIVEN NUMBER OF PROTONS\n");
		printf("Enter number of protons\n");
		scanf("%d", &p);
		anumber=p;
		printf("The Atomic number is equal to:%.2d\n", anumber);
	}
	else if (selection==15)
	{
		int e,anumber;
		
		printf("SOLVE FOR ATOMIC NUMBER OF AN ELEMENT GIVEN NUMBER OF ELECTRONS\n");
		printf("Enter number of electrons\n");
		scanf("%d", &e);
		anumber=e;
		printf("The Atomic number is equal to:%.2d\n", anumber);
	}
	
	else 
	printf("Invalid Input\n");
	
		
}


void Gas(){
     int selection;
printf("\nMenu:Gas Laws\n");
printf("1-BOYLE'S LAW:Solve for P1\n");
printf("2-BOYLE's LAW:Solve for V1\n");
printf("3-BOYLE'S LAW:Solve for P2\n");
printf("4-BOYLE's law:Solve for V2\n");
printf("5-CHARLE'S LAW:Solve for T1\n");
printf("6-CHARLE'S LAW:Solve for V2\n");
printf("7-CHARLE'S LAW:Solve for V1\n");
printf("8-CHARLE'S LAW:Solve for T2\n");
printf("9-GAY-LUSSAC'S LAW:Solve for T1\n");
printf("10-GAY-LUSSAC'S LAW:Solve for P2\n");
printf("11-GAY-LUSSAC'S LAW:Solve for P1\n");
printf("12-GAY-LUSSAC'S LAW:Solve for T2\n");
printf("13-AVOGADRO'S LAW:Solve for v\n");
printf("14-AVOGADRO'S LAW:Solve for k\n");
printf("15-AVOGADRO'S LAW:Solve for n\n");
printf("16-COMBINED GAS LAW:Solve for T1\n");
printf("17-COMBINED GAS LAW:Solve for P2\n");
printf("18-COMBINED GAS LAW-Solve for V2\n");
printf("19-COMBINED GAS LAW:Solve for P1\n");
printf("20-COMBINED GAS LAW:Solve for V1\n");
printf("21-COMBINED GAS LAW:Solve for T2\n");
printf("Enter selection:\n");
scanf("%d", &selection);
printf("You Selected:%d\n", selection);
if (selection==1)
{
float P1, P2, V1, V2;
printf("BOYLE's LAW:SOLVE FOR P1\n");
printf("Enter value of P2:\n");
scanf("%f", &P2);
printf("Enter value of V1:\n");
scanf("%f", &V1);
printf("Enter value of V2:\n");
scanf("%f", &V2);
P1=P2*V2/V1;
printf("The value of P1 is:%.2f\n", P1);
}
else if (selection==2)
{
float P1, P2, V1, V2;
printf("BOYLE's LAW:SOLVE FOR V1\n");
printf("Enter value of P1:\n");
scanf("%f", &P1);
printf("Enter value of P2:\n");
scanf("%f", &P2);
printf("Enter value of V2:\n");
scanf("%f", &V2);
V1=P2*V2/P1;
printf("The value of V1 is:%.2f\n", V1);
}
else if (selection==3)
{
float P1, P2, V1, V2;
printf("BOYLE's LAW:SOLVE FOR P2\n");
printf("Enter value of P1:\n");
scanf("%f", &P1); 
printf("Enter value of V1:\n");
scanf("%f", &V1);
printf("Enter value of V2:\n");
scanf("%f", &V2);
P2=P1*V1/V2;
printf("The value of P2 is:%.2f\n",P2);
}
else if (selection==4)
{
float P1, P2, V1, V2;
printf("BOYLE's LAW:SOLVE FOR V2\n");
printf("Enter value of P1:\n");
scanf("%f", &P1); 
printf("Enter value of P2:\n");
scanf("%f", &P2);
printf("Enter value of V1:\n");
scanf("%f", &V1);
V2=P1*V1/P2;
printf("The value of V2 is:%.2f\n",V2);
}
else if (selection==5)
{
float T1, T2, V1, V2;
printf("CHARLE'S LAW:SOLVE FOR T1\n");
printf("Enter value of T2 in kelvin:\n");
scanf("%f", &T2);
printf("Enter value of V1:\n");
scanf("%f", &V1);
printf("Enter value of V2:\n");
scanf("%f", &V2);
T1=V1*T2/V2;
printf("The value of T1 is:%.2fK\n",T1);
}
else if (selection==6)
{
float T1, T2, V1, V2;
printf("CHARLE'S LAW:SOLVE FOR V2\n");
printf("Enter value of V1:\n");
scanf("%f", &V1);
printf("Enter value of T1 in kelvin:\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin:\n");
scanf("%f", &T2);
V2=V1*T2/T1;
printf("The value of V2 is:%.2f\n", V2);
}
else if (selection==7)
{
float T1, T2, V1, V2;
printf("CHARLE'S LAW:SOLVE FOR V1\n");
printf("Enter value of T1 in kelvin:\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin:\n");
scanf("%f", &T2);
printf("Enter value of V2:\n");
scanf("%f", &V2);
V1=T1*V2/T2;
printf("The value of V1 is:%.2f\n",V1);
}
else if (selection==8)
{
float T1, T2, V1, V2;
printf("CHARLE'S LAW:SOLVE FOR T2\n");
printf("Enter value of T1 in kelvin:\n");
scanf("%f", &T1);
printf("Enter value of V1:\n");
scanf("%f", &V1);
printf("Enter value of V2:\n");
scanf("%f", &V2);
T2=T1*V2/V1;
printf("The value of T2 is:%.2fK\n",T2);
}
else if (selection==9)
{
float T1, T2, P1, P2;
printf("GAY-LUSSAC'S LAW:SOLVE FOR T1\n");
printf("Enter value of T2\n");
scanf("%f", &T2);
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of P2\n");
scanf("%f", &P2);
T1=P1*T2/P2;
printf("The value of T1 is:%.2f\n", T1);
}
else if (selection==10)
{
float T1, T2, P1, P2;
printf("GAY-LUSSAC'S LAW:SOLVE FOR P2\n");
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
P2=P1*T2/T1;
printf("The value of P2 is:%.2f\n", P2);
}
else if (selection==11)
{
float T1, T2, P1, P2;
printf("GAY-LUSSAC'S LAW:SOLVE FOR P1\n");
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
printf("Enter value of P2\n");
scanf("%f", &P2);
P1=T1*P2/T2;
printf("The value of P1 is:%.2f\n", P1);
}
else if (selection==12)
{
float T1, T2, P1, P2;
printf("GAY-LUSSAC'S LAW:SOLVE FOR T2\n");
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of P2\n");
scanf("%f", &P2);
T2=T1*P2/P1;
printf("The value of T2 is:%.2fK\n", T2);
}
else if (selection==13)
{
float v, k, n;
printf("AVOGADRO'S LAW:SOLVE FOR v\n");
printf("Enter value of k:\n");
scanf("%f", &k);
printf("Enter value of n:\n");
scanf("%f", &n);
v=k*n;
printf("The value of v is:%.2f\n", v);
}
else if (selection==14)
{
float v, k, n;
printf("AVOGADRO'S LAW:SOLVE FOR k\n");
printf("Enter value of v:\n");
scanf("%f", &v);
printf("Enter value of n:\n");
scanf("%f", &n);
k=v/n;
printf("The value of k is:%.2f\n", k);
}
else if (selection==15)
{
float v, k, n;
printf("AVOGADRO'S LAW:SOLVE FOR n\n");
printf("Enter value of v:\n");
scanf("%f", &v);
printf("Enter value of k:\n");
scanf("%f", &k);
n=v/k;
printf("The value of n is:%.2f\n", n);
}
else if (selection==16)
{
float T1, T2, V1, V2, P1, P2;
printf("COMBINED GAS LAW:SOLVE FOR T1\n");
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of V1\n");
scanf("%f", &V1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
printf("Enter value of P2\n");
scanf("%f", &P2);
printf("Enter value of V2\n");
scanf("%f", &V2);
T1= (P1*V1*T2)/(P2*V2);
printf("The value of T1 is:%.2fK\n", T1);
}
else if (selection==17)
{
float T1, T2, V1, V2, P1, P2;
printf("COMBINED GAS LAW:SOLVE FOR P2\n");
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of V1\n");
scanf("%f", &V1);
printf("Enter value of V2\n");
scanf("%f", &V2);
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
P2= (P1*V1*T2)/(T1*V2);
printf("The value of P2 is:%.2f\n", P2);
}

else if (selection==18)
{
float T1, T2, V1, V2, P1, P2;
printf("COMBINED GAS LAW:SOLVE FOR V2\n");
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of P2\n");
scanf("%f", &P2);
printf("Enter value of V1\n");
scanf("%f", &V1);
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
V2= (P1*V1*T2)/(T1*P2);
printf("The value of V2 is:%.2f\n", V2);
}

else if (selection==19)
{
float T1, T2, V1, V2, P1, P2;
printf("COMBINED GAS LAW:SOLVE FOR P1\n");
printf("Enter value of P2\n");
scanf("%f", &P2);
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
printf("Enter value of V1\n");
scanf("%f", &V1);
printf("Enter value of V2\n");
scanf("%f", &V2);
P1= (T1*P2*V2)/(V1*T2);
printf("The value of P1 is:%.2f\n", P1);
}

else if (selection==20)
{
float T1, T2, V1, V2, P1, P2;
printf("COMBINED GAS LAW:SOLVE FOR V1\n");
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of T2 in kelvin\n");
scanf("%f", &T2);
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of P2\n");
scanf("%f", &P2);
printf("Enter value of V2\n");
scanf("%f", &V2);
V1= (T1*P2*V2)/(P1*T2);
printf("The value of V1 is:%.2f\n", V1);
}

else if (selection==21)
{
float T1, T2, V1, V2, P1, P2;
printf("COMBINED GAS LAW:SOLVE FOR T2\n");
printf("Enter value of T1 in kelvin\n");
scanf("%f", &T1);
printf("Enter value of P1\n");
scanf("%f", &P1);
printf("Enter value of P2\n");
scanf("%f", &P2);
printf("Enter value of V1\n");
scanf("%f", &V1);
printf("Enter value of V2\n");
scanf("%f", &V2);
T2= (T1*P2*V2)/(P1*V1);
printf("The value of T2 is:%.2fK\n", T2);
}
else 
       printf("Invalid Input\n");
}



void Solution(){
     int selection;
	
	printf("Menu:Solution Concentration\n");
	
	printf("1-Solve for mass percent\n");
	printf("2-Solve for volume percent\n");
	printf("3-Solve for molarity\n");
	printf("4-Solve for molality\n");	
	printf("5-Solve for mole fraction\n");
	
	printf("Enter selection\n");
	scanf("%d", &selection);
	printf("You selected:%d\n", selection);


	if (selection==1)
	{
		float msolute, msolution, mpercent;
		printf("SOLVE FOR MASS PERCENT\n");
		printf("Enter mass(g) of solute\n");
		scanf("%f", &msolute);
		printf("Enter mass(g) of solution\n");
		scanf("%f", &msolution);
		mpercent=msolute/msolution*100;
		printf("The mass percent is equal to:%.2f\n", mpercent);
	}
	
	else if (selection==2)
	{
		float vsolute, vsolution, vpercent;
		printf("SOLVE FOR VOLUME PERCENT\n");
		printf("Enter volume of solute\n");
		scanf("%f", &vsolute);
		printf("Enter volume of solution\n");
		scanf("%f", &vsolution);
		vpercent=vsolute/vsolution*100;
		printf("The volume percent is equal to:%.2f\n", vpercent);
	}
	
		else if (selection==3)
	{
		float molarity, molsolute, litsolution;
		printf("SOLVE FOR MOLARITY(M)\n");
		printf("Enter moles of solute\n");
		scanf("%f", &molsolute);
		printf("Enter liter of solution\n");
		scanf("%f", &litsolution);
		molarity=molsolute/litsolution;
		printf("The molarity(M) is equal to:%.2f\n", molarity);
	}
	
		else if (selection==4)
	{
		float molality, molsolute, kgsolvent;
		printf("SOLVE FOR MOLALITY(m)\n");
		printf("Enter moles of solute\n");
		scanf("%f", &molsolute);
		printf("Enter kg of solvent\n");
		scanf("%f", &kgsolvent);
	molality=molsolute/kgsolvent;
		printf("The molality(m) is equal to:%.2f\n", molality);
	}
	
		else if (selection==5)
	{
		float mfraction,msos,molsolution;
		printf("SOLVE FOR MOLE FRACTION\n");
		printf("Enter moles of solute or solvent\n");
		scanf("%f", &msos);
		printf("Enter moles of solution\n");
		scanf("%f", &molsolution);
	mfraction=msos/molsolution;
		printf("The mole fraction is:%.2f\n", mfraction);
	}
	else 
       printf("Invalid Input\n");
}


void Tables(){
     int selection;
printf("\nTABLES\n");
printf("1- UNITS OF MEASUREMENTS\n");
printf("2- ELECTRON CONFIGURATION NOTATION\n");
printf("Enter selection\n");
scanf("%d", &selection);
printf("You selected:%d\n", selection);
if (selection==1)
{
	
	printf("\t\t\tUNITS OF MEASUREMENT\n ");
	printf("\t\t\t   SI BASE UNITS \n ");
	printf(" BASE QUANTITY \t\t\t\t  UNIT\n\n ");
	printf("Length  \t\t\t\t\tmeter(m)\n");
	printf(" Mass   \t\t\t\t\tkilogram(kg)\n");
	printf(" Temperature  \t\t\t\t\tKelvin(K)\n");			
	printf(" Amount of substance \t\t\t\tmole(mol)\n");
	printf(" Time   \t\t\t\t\tsecond(s)\n");
	printf(" Electric current \t\t\t\tampere(A)\n");
	printf(" Luminous intensity  \t\t\t\tcandela(cd)\n");
	
}

else if (selection==2)

{
	printf("\t\t\tELECTRON CONFIGURATION NOTATION\n\n");
	printf("ORBITAL TYPE \t\t  NO. OF TYPES \t\t  MAXIMUM ELECTRON CAPACITY\n\n");
	printf("  s\t\t\t\t1\t\t\t\t2\n");
	printf("  p\t\t\t\t3\t\t\t\t6\n");
	printf("  d\t\t\t\t5\t\t\t\t10\n");
	printf("  f\t\t\t\t7\t\t\t\t14\n");
}
else 
       printf("Invalid Input\n");
}
