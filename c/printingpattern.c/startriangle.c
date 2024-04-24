#include<stdio.h>
int main(){
    int n;
    printf("enter the value of rows: ");
    scanf("%d",&n);
    int m;
    printf("enter the value of column: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=4;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}