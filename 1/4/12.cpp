#include<stdio.h>
int main(){
    int n;
    // freopen("read","r",stdin);
    scanf("%d",&n);
    double bike = 50.0 + n/3.0;
    double walk = n/1.2;
    if(bike > walk) printf("Walk\n");
    else if(bike == walk) printf("All\n");
    else printf("Bike\n");
    return 0;
}