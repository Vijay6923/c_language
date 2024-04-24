#include<stdio.h>
int main(){
	int percentage ;
	printf("Enter the percentage : ");
	scanf("%d",&percentage);
	if(percentage>=81 && percentage<=100) printf("very good");
	else if(percentage>=61 && percentage<=80) printf("good");
	else if(percentage>=41 && percentage<=60) printf("average");
	else printf("fail");
	return 0;
}