#include<stdio.h>
int main(){
  int a,b;
  while(scanf("%d%d",&a,&b)!=EOF){
    printf("%.3lf%%\n",b*100.0/a);
  }
  return 0;
}