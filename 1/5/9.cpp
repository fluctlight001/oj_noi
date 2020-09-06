#include<stdio.h>
int main(){
    int a,b;
    // freopen("read","r",stdin);
    scanf("%d%d",&a,&b);
    int tmp = a%2 ? a : a+1;
    int sum = 0;
    while(tmp <= b){
        sum += tmp;
        tmp += 2;
    }
    printf("%d\n",sum);
    return 0;

}