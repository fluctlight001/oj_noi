#include<stdio.h>
int main(){
    int n;
    double a,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&a);
        sum+=a;
    }
    printf("%.4lf",sum/n);
    return 0;
}