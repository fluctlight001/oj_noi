#include<stdio.h>
int cmp(int a,int b){
    if(a == b) return 0;
    else if(a == 0 && b == 2) return 1;
    else if(a == 0 && b == 5) return -1;
    else if(a == 2 && b == 0) return -1;
    else if(a == 2 && b == 5) return 1;
    else if(a == 5 && b == 0) return 1;
    else if(a == 5 && b == 2) return -1; 
    else return 0;
}

int main(){
    // freopen("read","r",stdin);
    int n;
    int an,bn;
    int a[1000];
    int b[1000];
    scanf("%d%d%d",&n,&an,&bn);
    for(int i=0;i<an;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<bn;i++){
        scanf("%d",&b[i]);
    }
    int sum_a=0,sum_b=0;
    int a_j=0,b_j=0;
    for(int i=0;i<n;i++){
        if(cmp(a[a_j],b[b_j])>0)sum_a++;
        else if(cmp(a[a_j],b[b_j])<0)sum_b++;
        a_j++;
        b_j++;
        if(a_j == an)a_j=0;
        if(b_j == bn)b_j=0;
    }
    if(sum_a > sum_b)printf("A\n");
    else if(sum_b > sum_a)printf("B\n");
    else printf("draw\n");
    // printf("%d %d\n",sum_a,sum_b);
    return 0;
}