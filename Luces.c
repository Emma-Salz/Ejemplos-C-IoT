#include <stdio.h>
void bin(int a,int b,int c,int d);
void camnbio(int a,int b,int c,int d);
int main(){
    int a,b,c,d;
    a = 0; b = 0 ; c = 0 ; d = 0;
    camnbio(a,b,c,d);
    while(1);

}

void camnbio(int a,int b,int c,int d)
{
    printf("%d,%d,%d,%d",a,b,c,d);
    if(d==0){
        printf("%d,%d,%d,%d",a,b,c,d);
        d=0;
        c=1;
        printf("%d,%d,%d,%d",a,b,c,d);

    } 
    if (c==1) {
        c=0;
        b=1;
        printf("%d,%d,%d,%d",a,b,c,d);
    }
    if(b==1){
        a=1;
        b=0;
    }
    if (a==1){
    a=0;
     printf("%d,%d,%d,%d",a,b,c,d);
    }

}