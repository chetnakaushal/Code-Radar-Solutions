#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int a,n,num;
  scanf("%d",&num);
  scanf("%d",&n);
//num=~(num>>n)&1;
num=num&~(1<<n);
printf("%d",num);
    return 0;
}