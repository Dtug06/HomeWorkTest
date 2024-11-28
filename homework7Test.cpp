#include <stdio.h> 
int main (){
	int n;
	printf("moi nhap so nguyen n\n");
	scanf("%d",&n) ;
	for (int i=2;i<n;i++){
		if (n%i==0) {
			printf("%d\n",i) ;
		}
	} 
	return 0; 
	 
} 
