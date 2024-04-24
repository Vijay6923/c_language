#include<stdio.h>

int main(){
        unsigned char ch;
        FILE * ifp = fopen("data.txt", "r");
        while ( (ch = fgetc(ifp)) != EOF)
                printf("%c",ch);
        return 0;
}

