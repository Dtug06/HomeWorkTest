#include<stdio.h> 
#include<math.h> 
int main (){
	int a,b,c;
	double x,x1,x2,delta; 
	printf("bieu thuc co dang ax^2 +bx+c=0\n");
	printf("moi nhap a: ",a) ;
	scanf("%d",&a) ;
	printf("moi nhap b",b) ;
	scanf("%d",&b) ;
	printf("moi nhap c ");
	scanf("%d",&c) ;
if (a==0&&b==0){
	printf("phuong trinh vo nghiem");
	return 0; 
} 
if (a==0) {
	x=-c/b; 
	printf("x=%lf\n",x) ;
	return 0;	
}
delta =b*b -(4*a*c); 
if (delta ==0) {	
	x=-b/2*a;	
	printf("x=%lf\n",x) ; 
	return 0; 
}else 
if (delta>0) {
	x1=(-b+sqrt(delta) )/(2*a);
	x2=(-b-sqrt(delta) )/(2*a);
	printf("x1=%lf\n",x1);
	printf("x2=%lf\n",x2) ;
	 
}else 
printf("phuong trinh vo nghiem \n");
return 0; 
 
} 
