	/*
	Name: CALCULATION of KDV 
	Copyright: 
	Author: BURAK U�UR
	Date: 23.10.18 19:05
	Description: Hacetepe Universty Departman of Statistics C Projeckt-1
*/

#include<stdio.h>
#include<locale.h>//T�rk�e karekter kullanmak i�in 
int main(){
	float kdv,fiyat;
	setlocale(LC_ALL, "Turkish"); //T�rk�e karekter kullanmak i�in 
	printf("�r�n Fiyat�n� Giriniz:");
	scanf("%f",&fiyat);
	printf("KDV oran�n� giriniz(Y�ZDE):");
	scanf("%f",&kdv);
	printf("KDVsiz �r�n Fiyat�-->%.2f \n",fiyat);
	fiyat=fiyat+fiyat*(kdv/100);
	
	printf("KDVli �r�n Fiyat�-->%.2f",fiyat);
	
	return 0 ;
}

