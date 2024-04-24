#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("enter third number: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the greatest number",a);
    }
    if(b>a&&b>c){
        printf("%d is the greatest number",b);
    }
    if(c>b&&c>a){
        printf("%d is the greatest number",c);
    }
    return 0;
}