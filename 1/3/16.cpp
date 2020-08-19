#include <stdio.h>
#include <math.h>
int main(){
    // freopen("read","r",stdin);
    double xa,ya,xb,yb;
    scanf("%lf%lf",&xa,&ya);
    scanf("%lf%lf",&xb,&yb);
    double ans = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    printf("%.3lf",ans);
    return 0;
}