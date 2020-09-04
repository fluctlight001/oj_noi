#include<stdio.h>
int main (){
    int n;
    // freopen("read","r",stdin);
    scanf("%d",&n);
    if(n%3==0 && n%5==0)printf("YES");
    else printf("NO");
    return 0;
}