#include<stdio.h>
int main(){
    int n;
    // freopen("read","r",stdin);
    scanf("%d",&n);
    if(n%3 == 0){
        printf("3");
        if(n%5 == 0){
            printf(" 5");
            if(n%7 == 0){
                printf(" 7");
            }
            else printf("\n");
        }
        else if(n%7 == 0){
            printf(" 7");
        }
        else printf("\n");
    }
    else if(n%5 == 0){
        printf("5");
        if(n%7 == 0){
            printf(" 7");
        }
        else printf("\n");
    }
    else if(n%7 == 0){
        printf("7\n");
    }
    else printf("n\n");
}