#include<stdio.h>
int main(){
    int n;
    int a,sum=0;
    // freopen("read","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum += a;
    }
    printf("%.2lf",1.0*sum/n);
    return 0;
}
