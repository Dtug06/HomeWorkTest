#include<stdio.h> 
int main (){
	int n;
	printf("moi nhap so\n ");
	scanf("%d",&n) ;
	for (int f=2 ;f<=n;f++) {
		int isPrime =1; 
		for (int i=2;i*i<=f;i++ ){
		if (f%i==0) { 
			isPrime=0; 
			break; 
		}
		
	}
	if (isPrime){
		printf("%d\n",f) ;
	} else 
	printf("%d khong phai la so nguyen to\n",f) ;
	}
	return 0; 
	
} 
