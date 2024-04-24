#include<stdio.h>
int main(){
	int a,b,c ;
	printf("Enter 1st number a : ");
	scanf("%d",&a);
	printf("Enter 2nd number b: ");
	scanf("%d",&b);
	printf("Enter 3rd number c : ");
	scanf("%d",&c);
	if(a<=b && a<=c) printf("%d is the least number",a);
	else if(b<=c && b<=a) printf("%d is the least number",b);
	else { printf("%d is the least number",c);
}
	return 0;
}