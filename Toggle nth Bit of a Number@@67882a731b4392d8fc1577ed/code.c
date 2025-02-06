#include <stdio.h>


int main() {
    int x,i,res;
    scanf("%d %d",&x, &i);
    res=1<<(i-1);
    x=x^res;
    printf("%d",x);
    return 0;
}