#include<stdio.h>
int main(){
    int a[3];
    int b[3];
    int tmp=0;
    for(int i=91;i<343;i++){
        tmp=i;
        a[0]=tmp%7;
        tmp/=7;
        a[1]=tmp%7;
        a[2]=tmp/7;
        tmp=i;
        b[0]=tmp%9;
        tmp/=9;
        b[1]=tmp%9;
        b[2]=tmp/9;
        if(b[0]==a[2]&&b[1]==a[1]&&b[2]==a[0]){
            printf("%d\n",i);
            printf("%d%d%d\n",b[0],b[1],b[2]);
            printf("%d%d%d\n",a[0],a[1],a[2]);
        }
    }
    return 0;
}