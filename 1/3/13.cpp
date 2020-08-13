#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    int a;
    while(scanf("%d",&a)!=EOF){
        int b=0;
        while(a>0){
            b=b*10+a%10;
            a=a/10;
        }
        printf("%03d",b);
    }
    return 0;
}