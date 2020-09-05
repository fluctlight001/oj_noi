#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%d %c",&a,&b,&c);
    int sum;
    int invalid = 1;
    if(c == '+') sum = a + b;
    else if(c == '-') sum = a - b;
    else if(c == '*') sum = a * b;
    else if(c == '/'){
        if(b == 0){
            printf("Divided by zero!\n");
            invalid = 0;
        }
        else sum = a / b;
    }
    else {
        printf("Invalid operator!\n");
        invalid = 0;
    }
    if(invalid)printf("%d\n",sum);
    return 0;
}