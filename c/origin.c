#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates:");
    scanf("%d%d",&x,&y);
    if (x==0&&y==0)
    {
      printf("the point is on origin"); 
    }else if (x==0){
        printf("the point is on y axix");

    }else if(y==0){
        printf("the point is on x axix");
    }else{
        printf("the point does not lie on x axix and yaxis");
    }
    return 0;
    
}