#include <stdio.h>
#include <stdlib.h>

int main()
{
	float X,Y,Z,T;

	X = 8.5;
	Y = 4;

	Z=X/Y; 
	T=X*Y;
	
	printf("Nilai pembagian =%.2f \n", Z); 
	printf("Nilai perkalian =%.2f \n", T);
	system("pause");
}
