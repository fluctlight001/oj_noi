#include<stdio.h>
int main (){
    int n;
    char a;
    // freopen("read","r",stdin);
    scanf("%d %c",&n,&a);
    int sum;
    if(n>1000){
        sum = 8 + (n-1000)/500*4;
        if((n-1000)%500 != 0)sum+=4;
    }
    else sum = 8;
    if(a == 'y') sum+=5;
    printf("%d\n",sum);
    return 0;
}