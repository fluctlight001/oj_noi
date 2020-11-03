#include<stdio.h>
int main(){
    int n;
    int s[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int m;
    int sum = 0;
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(s[i] == m)sum++;
    }
    printf("%d\n",sum);
    return 0;
}