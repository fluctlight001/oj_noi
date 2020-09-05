#include<stdio.h>
int main(){
    int a;
    // freopen("read","r",stdin);
    scanf("%d",&a);
    int flag = 0;
    if(a%4 == 0){
        flag = 1;
    }
    if(a%100 == 0 && a%400 != 0){
        flag = 0;
    }
    if(a%3200 == 0)flag = 0;
    if(flag)printf("Y\n");
    else printf("N\n");
    return 0;
}