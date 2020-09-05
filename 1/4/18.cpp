#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=-1 && a<=1 && b>=-1 && b<=1)printf("yes\n");
    else printf("no\n");
    return 0;
}