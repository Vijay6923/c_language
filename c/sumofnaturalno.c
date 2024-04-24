#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%f ",a);
        a=a*(1/2);
        
    }
    
    return 0;
}