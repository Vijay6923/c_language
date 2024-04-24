#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if((n%5==0&&n%3==0)&&n%15!=0){
        
        printf("the number is divisible by 5 and 3 but not divisible by 15");
        }

    else{
        printf("invalid number");
    } 
    
    return 0;
}