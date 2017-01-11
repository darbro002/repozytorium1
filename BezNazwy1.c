#include <stdio.h>
#include <conio.h>
#define ROZ 20
#define KOL 5

int main()
{
	int k, x[ROZ];
	int suma=0;
	for(k=0;k<ROZ;++k)
	{
		x[k]=k;
		suma+=x[k];
	}
	printf("Lista elementow\n");
	for(k=0;k<ROZ;++k)
	printf("%c%4d",(k%KOL==0)? '\n': '\xB0',x[k]);
	printf("\nSUma elementow tablicy: %d",suma);
}
