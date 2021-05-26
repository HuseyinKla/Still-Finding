#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	devam:
		system("CLS");
	int rast,tahmin,sayi,basm[4],i=0,j=0,q=1,basmR[4],secim,times=0;

	
	srand(time(NULL));
	rast=1000+rand()%8999;
	
	
	printf("----------RASTGELE URETILEN SAYI BULMA OYUNUMUZA HOSGELDINIZ----------\n\n\n\n");
	printf("Oyun 4 basamakli sayilar icin gecerlidir!!\n\n\n\n");
	
	
	
	while(rast>0)
	{
		basmR[j] = rast%10;
		rast = rast/10;
		j++;
	}
	
	
	while(1)
	{
	printf("\n%d. Tahmininizi girin: ",times+1);
	scanf("%d",&tahmin);
	times++;
	i=0;
	while(tahmin>0)
	{
		basm[i] = tahmin%10;
		tahmin = tahmin/10;
		i++;
	}
	
	int sayac=0;
	
	for(int k=0 ; k<4 ; k++)
	{
		
	if(basm[k]==basmR[k])
	{
		printf("+");
		sayac++;	
	}
		
	else
		printf("-");
		
	}
	
	if(sayac==4)
	{
		goto son;
	}
	}

	son:
		printf("\n\nTebrikler %d. tahminde sayiyi dogru bildiniz\n\nBundan sonra ne yapmak istersiniz\n1-)Bitir\n2-)Tekrar oyna\n\nSeciminizi yapiniz: ",times);
		dogru:
		scanf("%d",&secim);
	if(secim==2)
		goto devam;
	else if(secim==1)
		return 0;
	else 
	{
		printf("Lutfen dogru sayi seciniz");
		goto dogru;
	}
}
