#include <stdio.h>


int main() {
    int x,i,res=0,m=0;
    scanf("%d %d",&x, &i);
   // if(i<1||i>32)
    //{return 1;}
    m=(1<<(i-1));
res=x^m;
    printf("%d",res);
    return 0;
}