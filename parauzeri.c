/*
	Name: Burak Uður
	Student ID:21822197  
	Date: 03.11.18 13:53
	Description:C Logical Operators example
*/

#include<stdio.h>
int main(){
	float para,para_ustu,urun;
	printf("Urun fiyatini girin:");
	scanf("%f",&urun);
	printf("Verilen para miktari:");
	scanf("%f",&para);
	if(para<urun){
		printf("Yeterli para bulunmamaktadir urunu alamazsiniz ");
	}
	else{
	para_ustu=para-urun;
	printf("Para uzeriniz:%.2f",para_ustu);
	}
}

