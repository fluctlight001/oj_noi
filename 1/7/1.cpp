#include<stdio.h>
#include<string.h>
int main(){
    // freopen("read","r",stdin);
    char a;
    int sum = 0;
    while(a=getchar()){
        if(a=='\n')break;
        sum = a>='0'&&a<='9' ? sum+1:sum;
    }
    printf("%d\n",sum);
    return 0;
}