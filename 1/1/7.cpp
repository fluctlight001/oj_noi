#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    double a;
    scanf("%lf",&a);
    printf("%f\n%.5f\n%e\n%g",a,a,a,a);
    return 0;
}

// %f  表示按浮点数的格式输出
// %e  表示按指数形式的浮点数的格式输出
// %g  表示自动选择合适的表示法输出