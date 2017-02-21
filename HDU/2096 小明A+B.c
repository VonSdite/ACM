#include<stdio.h>
int main(){
    int T, n, m, i;
    scanf("%d", &T);
    for (i = 1; i <= T; ++i){
        scanf("%d %d", &n, &m);
        printf("%d\n", (n%100 + m%100) % 100);
    }
    return 0;
}