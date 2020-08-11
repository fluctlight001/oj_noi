#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        double c=a*1.0/b;
        printf("%.9lf",c);
    }
    return 0;
}