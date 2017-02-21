#include<stdio.h>
int pantao (int n){
    return n == 1 ? 1 : 2 + 2 * pantao(n-1);
}
int main(){
    int n;
    while(scanf("%d", &n) != EOF){
       printf("%d\n", pantao(n));
    }
    return 0;
}