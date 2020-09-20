#include<stdio.h>
int main(){
    int r,m,y;
    // freopen("read","r",stdin);
    scanf("%d%d%d",&r,&m,&y);
    double ans=m;
    for(int i=0;i<y;i++){
        ans = (1+0.01*r)*ans;
    }
    int ans1 = (int)ans;
    printf("%d\n",ans1);
    return 0;
}