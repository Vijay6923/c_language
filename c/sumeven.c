#include <stdio.h>
int main() {
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int sum=0;
    int ld;
    while(n!=0){
        ld=n%10;
        if(ld%2==0){
            sum=sum+ld;
        }
        n=n/10;
    } 
    printf("sum of even digits in the number is %d",sum);
    return 0;
}


    