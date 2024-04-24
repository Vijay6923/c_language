#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the 2nd number: ");
    scanf("%d",&b);
    printf("enter the 3rd number: ");
    scanf("%d",&c);
    printf("enter the 4th number: ");
    scanf("%d",&d);
    if (a>b && a>c&&a>d){
        printf("the greatest number is %d",a);

    }
    else if(b>c&&b>d){
        printf("the greatest number is %d",b);

    }
    else if(c>d){
        printf("the greatest number is %d",c);
    }
    else{
        printf("the greatest number is %d",d);

    }
    return 0;
}