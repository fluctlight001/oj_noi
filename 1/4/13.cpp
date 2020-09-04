#include<stdio.h>
int main(){
    double x;
    double y;
    // freopen("read","r",stdin);
    scanf("%lf",&x);
    if(x>=0 && x<5) y = 2.5 - x;
    else if(x<10) y = 2.0-1.5*(x-3)*(x-3);
    else y = x/2.0 - 1.5;
    printf("%.3lf",y);
    return 0;
}