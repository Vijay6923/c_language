#include<stdio.h>
int main(){
    int n,m;
    printf("enter the no of rows: ");
    scanf("%d",&n);
    // printf("enter the value of column: ");
    // scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}