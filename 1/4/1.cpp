#include <stdio.h>
int main(){
  int n;
  // freopen("read","r",stdin);
  while(scanf("%d",&n)!=EOF){
    if(n>0) printf("positive\n");
    else if(n==0) printf("zero\n");
    else printf("negative\n");
  }
  return 0;
}