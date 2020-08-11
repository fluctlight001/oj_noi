#include <stdio.h>
int main (){
    // freopen("read","r",stdin);
    char a;
    scanf("%c",&a);
    for(int i=0;i<=2;i++){
        for(int j=1-i;j>=0;j--) printf(" ");
        for(int k=2*i;k>=0;k--) printf("%c",a);
        printf("\n");
    }
    // for(int i=1;i>=0;i--){
    //     for(int j=1-i;j>=0;j--) printf(" ");
    //     for(int k=2*i;k>=0;k--) printf("%c",a);
    //     if(i!=0) printf("\n");
    // }
    return 0;
}