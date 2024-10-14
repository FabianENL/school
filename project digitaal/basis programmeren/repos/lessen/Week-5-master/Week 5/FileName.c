#include<stdio.h>

void swap(int * a, int * b);
void Printarray(double * y, int lengte);
void intialiseerbord(char* bord[][8], int lengte);


void main()
{
	double y[4] = { 10,11,12,13 };
	//Printarray(y, 4);
	int schaakbord[8][8];
	int kubus[3][3][3];

	char* naam = "Jan";
	printf("Karaker op pos 1 is: %c\n", naam[4]);
	int lengte = strlen(naam);
	printf("Lengte string is: %d\n", lengte);

	/*int a = 1;
	int b = 2;

	printf("Waarde van a is : % d\n", a);
	printf("Waarde van b is : % d\n", b);

	swap(&a, &b);
	
	printf("Waarde van a is : % d\n", a);
	printf("Waarde van b is : % d\n", b);*/

	/*int x = 6;
	int* adres = &x;
	printf("De waarde van x is: %d\n", x);
	printf("Het adres van x is: %x\n", adres);


	int a[6] = { 1,2,3,4,5,6 };
	int b[6] = { 1,2,3,7,5,6 };

	//tabel in C
	int tabel[5];
	double cijfer[10] = {1.0, 7.0, 9.0, 3.0, 1.0, 7.0, 9.0, 3.0, 10, 5.5};

	//vullen van de tabel
	tabel[0] = 2;
	tabel[1] = 26;
	tabel[2] = 112;
	tabel[3] = 99;
	tabel[4] = 36;*/

	/*printf("Het %d e element is: %d\n", 3, tabel[2]);

	for (int i = 0; i < 5; i++)
	{
		printf("Het %d e element is: %d\n", i, tabel[i]);
	}*/

	/*for (int i = 0; i < 10; i++)
	{
		cijfer[i] = 0.0;
	}*/

	/*for (int i = 0; i < 10; i++)
	{
		printf("Het %d e cijfer is: %f\n", i, cijfer[i]);
	}*/

	/*for (int i = 0; i < 6; i++)
	{
		if (a[i] != b[i])
		{
			printf("Tabellen niet gelijk!!\n");
			break;
		}
	}*/

	intialiseerbord(schaakbord, 8);
}

void swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Printarray(double * y, int lengte)
{
	for (int i = 0; i < lengte; i++)
	{
		printf("Element %.2f:\n", y[i]);
	}
}

void intialiseerbord(char* bord [][8], int lengte)
{
	for (int rij = 0; rij < lengte; rij++)
	{
		for (int kolom = 0; kolom < lengte; kolom++)
		{
			bord[rij][kolom] = ' ';
		}
	}


}