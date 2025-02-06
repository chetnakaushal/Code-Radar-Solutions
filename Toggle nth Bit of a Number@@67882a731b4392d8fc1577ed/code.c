#include <stdio.h>


int main() {
    int x,i,res,m;
    scanf("%d %d",&x, &i);
    m=(1<<(i-1));
res=x^m;
    printf("%d",res);
    return 0;
}