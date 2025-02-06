#include <stdio.h>


int main() {
    //ith bit is 0 based means number count start from 0 and not 1
    int x,i,res=0,m=0;
    scanf("%d %d",&x, &i);
   // if(i<1||i>32)
    //{return 1;}
    m=1<<i;
res=x^m;
    printf("%d",res);
    return 0;
}