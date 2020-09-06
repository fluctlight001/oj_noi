#include<stdio.h>
int main(){
    int arr[10010];
    int n;
    // freopen("read","r",stdin);
    scanf("%d",&n);
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d %.5lf",sum,1.0*sum/n);
    return 0;
}