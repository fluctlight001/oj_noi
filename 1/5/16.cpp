#include<stdio.h>
int main(){
    int n,k;
    // freopen("read","r",stdin);
    scanf("%d%d",&n,&k);
    int ans = 0;
    int sum=0;
    double target = 200;
    for(int i=1;i<=20;i++){
        sum += n;
        if(sum > target){
            ans = i;
            break;
        }
        target = (1+0.01*k)*target;
    }
    if(ans == 0){
        printf("Impossible\n");
    }
    else {
        printf("%d\n",ans);
    }
    return 0;
}