#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int sum = 0;
    int a;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum = a==m ? sum+1 : sum;
    }
    printf("%d\n",sum);
    return 0;
}