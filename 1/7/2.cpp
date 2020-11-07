#include<stdio.h>
#include<string.h>

int main(){
    char c;
    int a[100];
    memset(a,0,sizeof(a));
    char b[100];
    memset(b,0,sizeof(b));
    // freopen("read","r",stdin);
    int k = 0;
    while(c=getchar()){
        if(c=='\n')break;
        a[c-'a']++;
        if(a[c-'a']==1)b[k++]=c;
    }
    int flag=1;
    for(int i=0;i<k;i++){
        if(a[b[i]-97]==1){
            printf("%c\n",b[i]);
            flag=0;
            break;
        }
    }
    if(flag)printf("no\n");
    return 0;
}