#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF){
        double r;
        int c=a/b;
        r=a-c*b;
        printf("%g\n",r);
    }
    return 0;
}