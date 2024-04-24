#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("enter 1st number:");
    scanf("%d",&x1);
    printf("enter 2nd number:");
    scanf("%d",&x2);
    printf("enter 3rd number:");
    scanf("%d",&x3);
    printf("enter 4th number:");
    scanf("%d",&y1);
    printf("enter 5th number:");
    scanf("%d",&y2);
    printf("enter 6th number:");
    scanf("%d",&y3);
    m1=(y2-y3)/x2-x3;
    m2=(y3-y2)/x2-x3;
    if(m1==m2){
        printf("all three points are collinear");
    }else{
        printf("not collinear");
    }
    return 0;
    


}