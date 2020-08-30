#include <stdio.h>
#include <math.h>

double ab(double a){
  return a < 0 ? -a : a;
}
int main(){
  // freopen("read","r",stdin);
  double x1,x2,x3;
  double y1,y2,y3;
  double x_max,x_min,y_max,y_min;
  while(scanf("%lf%lf",&x1,&y1)!=EOF){
    // x_max = x1;
    // x_min = x1;
    // y_max = y1;
    // y_min = y1;
    scanf("%lf%lf",&x2,&y2);
    // x_max = x_max < x2 ? x2 : x_max;
    // x_min = x_min < x2 ? x_min : x2;
    // y_max = y_max < y2 ? y2 : y_max;
    // y_min = y_min < y2 ? y_min : y2;
    scanf("%lf%lf",&x3,&y3);
    // x_max = x_max < x3 ? x3 : x_max;
    // x_min = x_min < x3 ? x_min : x3;
    // y_max = y_max < y3 ? y3 : y_max;
    // y_min = y_min < y3 ? y_min : y3;
    // double ans;
    // ans = (y_max - y_min) * (x_max - x_min) 
    //       - 0.5 * ab(y2-y1) * ab(x2-x1)
    //       - 0.5 * ab(y3-y2) * ab(x3-x2)
    //       - 0.5 * ab(y3-y1) * ab(x3-x1);
    // printf("%.2lf\n",ans);
    double a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    double b = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    double c = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    double p = (a+b+c)/2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2lf\n",s);
  }
  return 0;
}