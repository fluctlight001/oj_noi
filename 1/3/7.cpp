#include <stdio.h>
int main(){
  // freopen("read","r",stdin);
  double a,b,c,d,x;
  while(scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d)!=EOF){
    printf("%.7lf\n",a*x*x*x+b*x*x+c*x+d);
  }
  return 0;
}