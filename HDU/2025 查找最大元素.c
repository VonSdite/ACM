#include<stdio.h>
int main(){
    int  i, max, n, j,  line[100];
    while((line[0]=getchar()) != EOF){
        max = line[0];
        i = 1;
        for(; (line[i] = getchar()) != '\n'; ++i){
            if(line[i] > max) {
                max = line[i];
            }
        }
        n = i;
        for(j = 0; j <= n; ++j){
    if(line[j] == max){
                printf("%c", line[j]);
            printf("(max)");
            }
            else
                printf("%c", line[j]);
        }
    }
    return 0;
}