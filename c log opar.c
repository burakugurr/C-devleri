/*
	Name: Burak Uður
	Student ID:21822197  
	Date: 03.11.18 13:53
	Description:C Logical Operators example
*/

#include<stdio.h>
int main(){
	
	float x;
	printf("1 ile 100 arasinda bir sayi giriniz:");
	scanf("%f",&x);

	if(x<1 || x>100)
		printf("Sayi 1 ile 100 arasinda degildir.");
	else{
		printf("sayi 1-100 arasinda");

		return 0;
	}//else son
	
	
	
}
/*Alternatif Çözüm
float a;
printf("-100 arasinda bir sayi giriniz:");
scanf("%f",&a);
if(a>=&& a<=100)
printf("Sayitanimli aralikta");

else if(a>100 || a<1){
printf("Hata sayi tanimli aralikta deðil");
}
*/
