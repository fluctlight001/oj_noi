#include <stdio.h>
int main(){
  // freopen("read","r",stdin);
  double a;
  while(scanf("%lf",&a)!=EOF){
    printf("%.5lf\n",5.0*(a-32)/9);
  }
  return 0;
}