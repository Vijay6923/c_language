#include<stdio.h>
int main(){
	int x,y ;
	printf("Enter x coordinate ");
	scanf("%d",&x);
	printf("Enter y coordinate ");
	scanf("%d",&y);
	if(x>0 && y>0) printf("the coordinates are in 1st quadrant");
	else if(x<0 && y>0) printf("the coordinates are in 2nd quadrant");
	else if(x<0 && y<0) printf("the coordinates are in 3rd quadrant");
	else if(x>0 && y<0) printf("the coordinates are in 4th quadrant");
	else printf("the coordinates are origin");
	return 0;
}