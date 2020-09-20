#include<stdio.h>
int main(){
    int a[100];
    a[1]=1;
    a[2]=1;
    int n;
    scanf("%d",&n);
    for(int i=3;i<100;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d\n",a[n]);
    return 0;
}