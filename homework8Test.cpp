#include <stdio.h> 
int main (){
	double  firstMoney,lastMoney,laiXuat,lai; 
int month; 
	printf("moi nhap so tien gui vao ngan hang luc dau ");
	scanf("%lf",&firstMoney) ;
	printf("so thang gui ");
	scanf("%d",&month ) ;
	printf("lai suat ngan hang 1 thang ");
	scanf("%lf",&laiXuat) ;
	lai = ((laiXuat*month)/100)*firstMoney;
	lastMoney=lai+firstMoney;
	printf("so tien sau %d thang la :",month) ;
	printf("thu ve duoc %lf ",lastMoney) ;
	
	return 0;	 
} 
