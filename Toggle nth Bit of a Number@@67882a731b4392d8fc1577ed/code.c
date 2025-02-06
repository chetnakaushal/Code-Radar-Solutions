#include <stdio.h>


int main() {
    int x,i,res;
    scanf("%d %d",&x, &i);
    res=1<<(i-1);
    res=x^res;
    printf("%d", res);
    return 0;
}