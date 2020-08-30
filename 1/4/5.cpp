#include<stdio.h>
int main(){
  long int a,b;
  scanf("%ld%ld",&a,&b);
  if(a>b)printf(">");
  else if(a==b)printf("=");
  else printf("<");
  return 0;
}