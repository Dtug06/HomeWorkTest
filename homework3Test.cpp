#include<stdio.h> 
int main (){
	int password=12345678,wrong,n; 
	wrong=0;
	while(wrong==0) {
		printf("moi doan mat khau \n");
		scanf("%d",&n) ;
		if (n==password) {
			printf("ban da nhap dung"); 
			wrong =1; 
		}
	}
	return 0; 
	 
} 
