#include <stdio.h>


int main() {
    int x,i,res,m;
    scanf("%d %d",&x, &i);
    res=1<<(i-1);
    m=x^res;
    printf("%d",m);
    return 0;
}