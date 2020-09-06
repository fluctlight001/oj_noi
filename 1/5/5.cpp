#include<stdio.h>
int main(){
    int n;
    int a,max = -1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        max = max > a ? max : a;
    }
    printf("%d\n",max);
    return 0;
}