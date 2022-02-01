#include<stdio.h>
#include<stdlib.h>

void	us(int a,int b)
{
	// us alma bir sayinin diger sayi kadar yan yana dizilip carpimina denir
	// a 5 b 3 ise a*a*a seklinde donguyu kurduk
	int c=1;
	int d=b; // b sifira dusuyor ekrana cikti vermek icin d yi kullanicaz

	while(b>0)
	{
		c*=a;
		b--;
	}
	printf("%d ^ %d = %d,", a,d,c);
}
