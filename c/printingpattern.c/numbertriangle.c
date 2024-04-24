#include<stdio.h>
int main(){
    int n,m;
    printf("enter the no of rows: ");
    scanf("%d",&n);
    printf("enter the no of column: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}