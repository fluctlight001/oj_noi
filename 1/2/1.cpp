#include <stdio.h>
int main(){
    int a;
    a=sizeof(a);
    int b;
    short c;
    b=sizeof(c);
    printf("%d %d",a,b);
    return 0;
}