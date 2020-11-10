#include<stdio.h>
#include<string.h>

int main(){
    char a[300];
    char b[300];
    // freopen("read","r",stdin);
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    int k=0;
    char num;
    while(1){
        num=getchar();
        if(num=='\n')break;
        else a[k++]=num;
    }
    int l=0;
    while(1){
        num=getchar();
        if(num=='\n')break;
        else b[l++]=num;
    }
    int c[300];
    memset(c,0,sizeof(c));
    int min=k<l?k:l;
    int max=k>l?k:l;
    int ov=0;
    for(int i=0;i<min;i++){
        c[i]=a[--k]-48+b[--l]-48+ov;
        if(c[i]>=10){
            c[i]-=10;
            ov=1;
        }
        else{
            ov=0;
        }
        // printf("%d %d\n",c[i],ov);
    }
    for(int i=min;i<max;i++){
        c[i]=k==0?b[--l]-48+ov:a[--k]-48+ov;
        if(c[i]>=10){
            c[i]-=10;
            ov=1;
        }
        else{
            ov=0;
        }
    }
    if(ov==1)c[max]=1;
    int flag = 0;
    for(int i=max;i>=0;i--){
        if(c[i]!=0||i==0)flag=1;
        if(flag)
            printf("%d",c[i]);
    }
    printf("\n");
    return 0;
}