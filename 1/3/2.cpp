#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        printf("%d",(a+b)*c);
    }
    return 0;
}