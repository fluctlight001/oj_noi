#include<stdio.h>
#include<string.h>
// #include<math.h>
int abs(int a){
    return a<0?-a:a;
}
int main(){
    // freopen("read","r",stdin);
    char s[4000];
    memset(s,0,sizeof(s));
    int n;
    int a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
            scanf("%d",&a);
        }
        else {
            scanf("%d",&b);
            // printf("%d %d\n",a,b);
            a=abs(a-b);
            // printf("%d\n",a);
            s[a]++;
            a=b;
        }
    }
    int sum=0;
    for(int i=1;i<n;i++){
        // printf("%d %d\n",i,s[i]);
        if(s[i]==1)sum++;
        else break;
    }
    if(sum==n-1)printf("Jolly\n");
    else printf("Not jolly\n");
    return 0;
}