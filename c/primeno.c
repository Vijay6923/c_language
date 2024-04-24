#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(i%2==0){
        printf("the given is composite number ");
        break;
    }
}
}