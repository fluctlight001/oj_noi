#include<stdio.h>
int main(){
    int a,b;
    // freopen("read","r",stdin);
    scanf("%d%d",&a,&b);
    int tmp = a%17==0 ? a : a+(17-(a%17));
    int sum = 0;
    // printf("%d\n",tmp);
    while(tmp <= b){
        sum += tmp;
        tmp += 17;
    }
    printf("%d\n",sum);
    return 0;
}