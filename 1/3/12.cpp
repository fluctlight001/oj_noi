#include <stdio.h>
#define pi 3.14
int main(){
    // freopen("read","r",stdin);
    double a;
    while(scanf("%lf",&a)!=EOF){
        printf("%.2lf",a*a*a/3*4*pi);
    }
    return 0;
}