#include<stdio.h>
int main(){
    int n;
    int min,max,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(i == 0){
            min = a;
            max = a;
        }
        else {
            min = min > a ? a : min;
            max = max > a ? max : a;
        }
    }
    printf("%d\n",max - min);
    return 0;
}