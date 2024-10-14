#include<stdio.h>
#include<math.h>

//prototypes!!
void print();
int GroterDan5(int a);
double discriminant(double a, double b, double c);
float tweemaal(float x);
double worteltrekker(double getal);
int recursie();
int aantalLeden(int aantal);

int overalbekend = 0;

void main()
{
	/*static int maandag = 100;
	printf("%d\n", maandag);*/

	/*printf("Dit is de main-functie\n");
	printf("Voer de functie uit:\n");
	print();
	printf("En koom weer terug naar de main....:\n");*/

	/*int resultaat = telop(2, 3);
	printf("Resultaat van de optelling is: %d\n", resultaat);*/

	/*int waarde = GroterDan5(4);
	printf("Resultaat van de vergelijking is: %d\n", waarde);*/

	/*double a = 12;
	double b = 3;
	double c = -1;


	double d = discriminant(a, b, c);
	printf("discriminant is: %.2f\n", d);*/

	/*int getal = 169;
	
	printf("Wortel van %d is: %.2f\n", getal, worteltrekker(getal));
	printf("getal in main is: %d\n", getal);
	{
		int getal = 15;
	}*/

	//recursie();

	/*printf("Aantal leden: %d\n", aantalLeden(9));
	printf("Aantal leden: %d\n", aantalLeden(5));
	printf("Aantal leden: %d\n", aantalLeden(6));*/

	int a = 7;
	int* adress_van_a = &a;
	printf("Inhoud van a: %d\n", a);
	printf("Adres van a: %x\n", (int*)adress_van_a);
	printf("Opvolgend Adres: %x\n", (int*)++adress_van_a);
	printf("test\n");
}

void print()
{
	printf("ik print wat op het scherm....\n");
}

int GroterDan5(int a)
{
	if (a > 5)
		return 1;
	else
		return 0;
}

double discriminant(double a, double b, double c)
{
	double discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
		return -1;
	else
		return discriminant;
}

float tweemaal(float x)
{
	return 2.0f * x;
}

double worteltrekker(double getal)
{
	getal = sqrt(getal);
	printf("getal in functie is: %.2f\n", getal);
	return getal;
}

int recursie()
{
	overalbekend++;
	printf("Groter en groter: %d\n", overalbekend);
	//recursie();
}

int aantalLeden(int aantal)
{
	//static int totaalLeden = 0;
	int totaalLeden = 0;
	totaalLeden += aantal;
	return totaalLeden;
}
