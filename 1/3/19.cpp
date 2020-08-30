#include <stdio.h>
int main (){
  long int a,b;
  // freopen("read","r",stdin);
  while(scanf("%ld%ld",&a,&b)!=EOF){
    printf("%ld\n",a*b);
    // printf("%d",sizeof(a));
  }
  return 0;
}