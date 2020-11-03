#include<stdio.h>
int main(){
    int n;
    int s[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",s[i]);
        if(i!=0)printf(" ");
        else printf("\n");
    }
    return 0;
}