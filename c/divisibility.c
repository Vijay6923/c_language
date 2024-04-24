#include<stdio.h>
int main(){
	int n ;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%5==0 || n%3==0) printf("it is either divisible by 5 or 3");
	else {
	printf("neither divisible by 5 nor by 3");
}
	return 0;
}