#include <stdio.h>
#define pi 3.14159
int main(){
  float r1,r2;
  while(scanf("%f%f",&r1,&r2)!=EOF){
    printf("%.2f",1.0/(1/r1+1/r2));
  }
  return 0;
}