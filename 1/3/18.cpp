#include <stdio.h>
int main (){
  int a1,a2,n;
  // freopen("read","r",stdin);
  while(scanf("%d%d%d",&a1,&a2,&n)!=EOF){
    int d = a2 - a1;
    int ans = a1 + (n-1)*d;
    printf("%d\n",ans);
  }
  return 0;
}