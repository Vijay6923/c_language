#include<stdio.h>
int main(){
	int cp,sp,profit,loss ;
	printf("Enter the cost price : ");
	scanf("%d",&cp);
	printf("Enter the selling price : ");
	scanf("%d",&sp);
	if(cp>sp) printf("the loss is : %d",cp-sp);
	else if(sp>cp) printf("the profit is : %d",sp-cp);
	else printf("neighter profit nor loss");
	return 0;
}