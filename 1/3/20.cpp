#include <stdio.h>
#include <math.h>
int main(){
  // freopen("read","r",stdin);
  int a;
  while(scanf("%d",&a)!=EOF){
    printf("%.0lf\n",pow(2,a));
  }
  return 0;
}