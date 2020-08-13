#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    int n,x,y;
    while(scanf("%d%d%d",&n,&x,&y)!=EOF){
        int used=y/x;
        if(y-used*x>0)used++;
        printf("%d\n",n-used);
    }
    return 0;
}