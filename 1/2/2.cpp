#include<stdio.h>
int main(){
    int a,b;
    float c;
    double d;
    a=sizeof(c);
    b=sizeof(d);
    printf("%d %d",a,b);
    return 0;
}