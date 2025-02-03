#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int a,n,num;
  scanf("%d",&num);
  scanf("%d",&n);
a=~(num>>n)&1;
printf("%d",a);
    return 0;
}