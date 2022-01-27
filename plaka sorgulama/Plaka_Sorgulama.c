#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int plaka;
	char sehir[81][15] = {{"adana"},{"adıyaman"},{"afyon"},{"ağrı"},{"amasya"},{"ankara"},{"antalya"},{"artvin"},{"aydın"},{"balıkesir"},{"bilecik"},{"bingöl"},{"bitlis"},{"bolu"},{"burdur"},{"bursa"},{"çanakkale"},{"çankırı"},{"çorum"},{"denizli"},{"diyarbakır"},{"edirne"},{"elazığ"},{"erzincan"},{"erzurum"},{"eskişehir"},{"gaziantep"},{"giresun"},{"gümüşhane"},{"hakkari"},{"hatay"},{"ısparta"},{"mersin"},{"istanbul"},{"izmir"},{"kars"},{"kastamonu"},{"kayseri"},{"kırklareli"},{"kırşehir"},{"kocaeli"},{"konya"},{"kütahya"},{"malatya"},{"manisa"},{"kahramanmaraş"},{"mardin"},{"muğla"},{"muş"},{"nevşehir"},{"niğde"},{"ordu"},{"rize <3"},{"sakarya"},{"samsun"},{"siirt"},{"sinop"},{"sivas"},{"tekirdağ"},{"tokat"},{"amk hamsileri"},{"tunceli"},{"şanlıurfa"},{"uşak"},{"van"},{"yozgat"},{"zonguldak"},{"aksaray"},{"bayburt"},{"karaman"},{"kırıkkale"},{"batman"},{"şırnak"},{"bartın"},{"ardahan"},{"ığdır"},{"yalova"},{"karabük"},{"kilis"},{"osmaniye"},{"düzce"}};

	printf("lütfen plaka kodunu girin \n");
	scanf("%d", &plaka);

	printf("%s", sehir[plaka-1]);
	return(0);
}
