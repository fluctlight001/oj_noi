#include<stdio.h>
int main(){
  int n;
  // freopen("read","r",stdin);
  while(scanf("%d",&n)!=EOF){
    if(n%2) printf("odd\n");
    else printf("even\n");
  }
  return 0;
}