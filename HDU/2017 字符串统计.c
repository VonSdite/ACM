#include<stdio.h>
int main(){
    int num, n, i;
    char line;
    scanf("%d", &n);
    getchar();
    for(i = 1; i <=n; ++i){
        num = 0;
        for(; (line = getchar()) != '\n'; ){
            if(line >='0' && line <= '9')
                num++;       
        }       
        printf("%d\n", num);               
    }
    return 0;
}