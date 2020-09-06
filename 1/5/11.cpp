#include<stdio.h>
int main(){
    int one=0,five=0,ten=0;
    int n;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        one = a==1 ? one+1 : one;
        five = a==5 ? five+1 : five;
        ten = a==10 ? ten+1 :ten;
    }
    printf("%d\n%d\n%d\n",one,five,ten);
    return 0;
}