#include<stdio.h>
int main(){
    int n;
    int au,ag,cu;
    int s_au=0,s_ag=0,s_cu=0;
    // freopen("read","r",stdin);
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&au,&ag,&cu);
        s_au+=au;
        s_ag+=ag;
        s_cu+=cu;
    }
    printf("%d %d %d %d\n",s_au,s_ag,s_cu,s_au+s_ag+s_cu);
    return 0;
}