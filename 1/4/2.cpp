#include<stdio.h>
int main(){
  // freopen("read","r",stdin);
  double n;
  while(scanf("%lf",&n)!=EOF){
    n = n < 0 ? -n : n;
    printf("%.2lf\n",n);
  }
  return 0;
}