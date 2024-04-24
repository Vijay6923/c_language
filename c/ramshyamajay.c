#include<stdio.h>
int main(){
	int ram,shyam,ajay ;
	printf("Enter ram's age : ");
	scanf("%d",&ram);
	printf("Enter shyam's age : ");
	scanf("%d",&shyam);
	printf("Enter ajay's age : ");
	scanf("%d",&ajay);
	if(ram<=shyam && ram<=ajay) printf("ram is the youngest",ram);
	else if(shyam<=ajay && shyam<=ram) printf("shyam is the youngest",shyam);
	else { printf("ajay is the youngest",ajay);
}
	return 0;
}