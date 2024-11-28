#include <stdio.h> 
int main (){
	int n,isPrime;
	isPrime=1; 
	printf ("moi nhap so de kiem tra :");
	scanf ("%d",&n) ;
	for (int i=2 ;i*i<=n;i++){
		if (n%i==0) {
		isPrime=0;
		break;			
		}				
	} 
	if (isPrime){
			printf("la 1 so nguyen to"); 
		}else 
		printf("khong phai la so nguyen to");
	return 0; 

} 
