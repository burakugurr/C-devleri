	/*
	Name: CALCULATION of KDV with Dollar Exchange Rate
	Copyright: 
	Author: BURAK U�UR
	Date: 23.10.18 19:46
	Description: Hacetepe Universty Departman of Statistics C Projeckt-2
*/

#include<stdio.h>
#include<locale.h>//T�rk�e karekter kullanmak i�in 
#include <time.h>


int main(){
	float dolarf,dolar,tlf,fiyat;
	
	setlocale(LC_ALL, "Turkish"); //T�rk�e karekter kullanmak i�in 
	
	printf("�r�n fiyat� girin: $");
	scanf("%f",&dolarf);
	printf("\n");
////////zaman� g�stermek i�in kullan�lan �zel func.///////
time_t simdiki_zaman ;
simdiki_zaman = time(NULL) ;
printf(ctime(&simdiki_zaman ) ) ;
//////////////////////////////////////////////////////////
	printf("Tarihindeki Dolar Kurunu giriniz:");
	scanf("%f",&dolar);
	
	tlf=dolar*dolarf;
	fiyat=tlf+tlf*0.18;

	printf("KDVli SATI� F�YATI : %.2f",fiyat);
	
	return 0 ;
}

