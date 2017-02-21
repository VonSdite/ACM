#include<stdio.h>
int main(){
    int n, i, k, a[100],min, temp;   
    while(scanf("%d", &n) != EOF && n != 0){
        scanf("%d", &a[0]);
        min = a[0];
        k = 0;
        for(i = 1; i < n; ++i){
            scanf("%d", &a[i]);
            if(a[i] < min){
                min = a[i];   
                k = i;
            }
        }
        temp = a[0];
        a[0] = min;
        a[k] = temp;
        for(i = 1; i <= n; ++i)
        {
            if(i !=1)
                printf(" ");
            printf("%d", a[i-1]);
        }
        printf("\n");   
    }
    return 0;
}