#include<stdio.h>
#include<stdlib.h>

void	faktoriyel(int a,int b)
{
	// faktoriyel bir sayinin 1 sayisina kadar olan sayilarin carpimidir.
	int faktoriyel1=1;
	int faktoriyel2=1;
	int c=a;
	int d=b;
	// a ve b sifira dusecegi icin ekrana cikti vermek icin a ve b yi baska bir int e esitledik
	
	while(a>0)
	{
		faktoriyel1 *=a;
		a--;
	}
	while(b>0)
	{
		faktoriyel2 *=b;
		b--;
	}
	printf("%d! = %d\n", c,faktoriyel1);
	printf("%d! = %d\n", d,faktoriyel2);
}
