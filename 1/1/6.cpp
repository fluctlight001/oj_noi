#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    char a;
    int b;
    float c;
    double d;
    scanf("%c%d%f%lf",&a,&b,&c,&d);
    printf("%c %d %.6f %.6lf",a,b,c,d);
    return 0;
}  