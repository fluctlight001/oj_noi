#include<stdio.h>
int main(){
    int a,b;
    // freopen("read","r",stdin);
    scanf("%d%d",&a,&b);
    double ans = a;
    for(int i=0;i<b;i++){
        ans = (1.001) * ans;
    }
    printf("%.4lf\n",ans);
    return 0;
}