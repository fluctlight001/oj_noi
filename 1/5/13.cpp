#include<stdio.h>
int main(){
    int a,n;
    scanf("%d%d",&a,&n);
    int ans = a;
    for(int i=1;i<n;i++){
        ans *= a;
    }
    printf("%d\n",ans);
    return 0;
}