#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    int sum = (n-2)*180;
    for(int i=0;i<n-1;i++){
        scanf("%d",&a);
        sum -= a;
    }
    printf("%d\n",sum);
    return 0;

}