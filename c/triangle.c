#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first side: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("enter the 3rd number : ");
    scanf("%d",&c);
    if ((a+b)>c||(b+c)>a||(a+c)>b){
        printf("they are the sides of the triangle");
    }
    return 0;
}