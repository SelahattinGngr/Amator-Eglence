#include<stdio.h>
#include<stdlib.h>

void	toplama(int a,int b);
void	cikarma(int a,int b);
void	bolme(int a,int b);
void	carpma(int a,int b);
void	mod(int a,int b);
void	us(int a,int b);
void	faktoriyel(int a,int b);

int	main()
{
	int	a,b;
	int	islem;
	printf("Lutfen Birinci Degeri Girin\n");
	scanf("%d",&a);
	printf("Lutfen Yapilacak islemi Girin\n");
	printf("Toplama    islemi icin - 1\n");
	printf("Cıkarma    islemi icin - 2\n");
	printf("Bolme      islemi icin - 3\n");
	printf("Carpma     islemi icin - 4\n");
	printf("Mod alma   islemi icin - 5\n");
	printf("us  alma   islemi icin - 6\n");
	printf("Faktoriyel islemi icin - 7\n\n");
	scanf("%d",&islem);
	printf("\n");

	switch(islem)
	{
		case 1: printf("Sectiginiz islem toplama");
		break;
		case 2: printf("Sectiginiz islem cikarma");
		break;
		case 3: printf("Sectiginiz islem bolme");
		break;
		case 4: printf("Sectiginiz islem carpma");
		break;
		case 5: printf("Sectiginiz islem mod alma");
		break;
		case 6: printf("Sectiginiz islem us alma");
		break;
		case 7: printf("Sectiginiz islem faktoriyel alma");
		break;
		default: printf("Yanlis islem sectiniz");
		break;

	}
	if(islem==1 || islem==2 || islem==3 || islem==4 || islem==5 || islem== 6 || islem==7)
	{
		printf("\n\n");
		printf("Lutfen ikinci degeri girin\n");
		scanf("%d",&b);
	}
	
	switch(islem)
	{
		case 1: toplama(a,b);
		break;
		case 2: cikarma(a,b);
		break;
		case 3: bolme(a,b);
		break;
		case 4: carpma(a,b);
		break;
		case 5: mod(a,b);
		break;
		case 6: us(a,b);
		break;
		case 7: faktoriyel(a,b);
		break;
	}
	return(0);
}
