#include <iostream>

using namespace std;

int main()
{
	int tab[100];
	int suma=0;
	for(int i=10;i<100;i++)
	{
		tab[i]=i;
		if(i%10==0)
		{
			cout<<endl<<tab[i]<<" ";
		}
		else
		{
			cout<<tab[i]<<" ";
		}
		suma=suma+i;
	}
	cout<<endl<<endl<<"Suma elementow: "<<suma;
}
