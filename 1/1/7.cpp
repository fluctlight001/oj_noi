#include <stdio.h>
int main(){
    // freopen("read","r",stdin);
    double a;
    scanf("%lf",&a);
    printf("%f\n%.5f\n%e\n%g",a,a,a,a);
    return 0;
}

// %f  ��ʾ���������ĸ�ʽ���
// %e  ��ʾ��ָ����ʽ�ĸ������ĸ�ʽ���
// %g  ��ʾ�Զ�ѡ����ʵı�ʾ�����