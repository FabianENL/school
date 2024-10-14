#include <stdio.h>

void main()
{
#pragma region operatoren
	//int a = 1;
	//int b = 2;

	////b=3 Toekenning!!!
	////b==3 Vergelijken!!
	////&& EN!
	////||

	///*if (a==1 || b==7)
	//{
	//	printf("huuu?????");
	//}*/
	//
	////kijk uit!!
	////& operator!!!
	////| operator!!!
	//int c = 10;
	//int d = c & 2;
	////printf("Uitkomst %d\n", d);

	////NOT operator
	//int e = 13;
	//printf("Uitkomst %d\n", !e);
#pragma endregion

	int teller = 0;
	while (teller <= 100)
	{
		printf("Tellen (%d) \n", teller);
		++teller;
	}


	for (int x = 0; x <101; x++)
	{
		printf("Tellen (%d) \n", teller);
		x = x + 6;
	}

	do
	{
		printf("Tellen (%d) \n", teller);
		++teller;
	} while (teller <= 100);

	int a;
	
	for (int x = 0; x < 8; x++)
	{ 
		for (int y = 0; y < 8; y++)
		{
			for (int z = 0; z < 8; z++)
			{

			}
		}
	}
}