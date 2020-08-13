#include <stdio.h>
#define pi 3.14159
int main(){
    // freopen("read","r",stdin);
    int h,r;
    while(scanf("%d%d",&h,&r)!=EOF){
        int sum=20000/(pi*r*r*h);
        if(20000-sum*pi*r*r*h>0){
            sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}