#include <stdio.h> 
int main (){
	int year,month,day;
	int nhuan; 
	printf("moi nhap so nam \n");
	scanf("%d",&year) ;
	if (year %4==0&&year%100!=0||year%400==0) {
	nhuan =1;	
	}
	printf("moi nhap thang \n");
	scanf("%d",&month) ;
	 if (nhuan==1) {
	 	if (month==2) {
	 		printf("so ngay hop le thuoc 1<=x<28");
			  
		 }else 
		 if(month==2||month==4||month||9||month==11) {
		 	printf("so ngay hop le la 1<=x<=30") ;
		 }else 
		 printf("so ngay hop le la 1<=x<=31") ;
	 }
	return 0; 
} 
