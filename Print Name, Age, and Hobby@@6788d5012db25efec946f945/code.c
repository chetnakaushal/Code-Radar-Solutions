#include <stdio.h>

int main() {
    char a[100];
    scanf("%s", &a);
    int b;
    scanf("%d",&b);
    char c[100];
    scanf("%s", &c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
   
    return 0;
}