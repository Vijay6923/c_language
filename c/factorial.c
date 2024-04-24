#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    //1+2+3+4+5......
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0)sum=sum+i;
        if(i%2==0)sum=sum-i;
    }
    printf("sum of the series is %d",sum);
    
    return 0;
        
        
    }
    
