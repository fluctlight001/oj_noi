#include<stdio.h>
int main(){
    int a[4];
    int max;
    // freopen("read","r",stdin);
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
        if(i == 0)max = a[i];
        else max = a[i] > max ? a[i] : max;
    }
    printf("%d",max);
    return 0;
}