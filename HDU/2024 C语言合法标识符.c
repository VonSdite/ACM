#include<stdio.h>
int main(){
    int n, i, j,frag;
    char line[50];
    while(scanf("%d", &n) != EOF){
        getchar();
        for(i = 1; i <= n; ++i){
            j = 0; frag = 0;
            while((line[j] = getchar()) != '\n'){                        
                if(!((line[j]=='_')||(line[j]>='0'&&line[j]<='9')||(line[j]>='A'&&line[j]<='Z')||(line[j]>='a'&&line[j]<='z')))           
                    frag = 1;           
                if(line[0] >= '0' && line[0] <= '9'){
                    frag = 1;
                }
                ++j;
            }
                if(frag == 0)
                    printf("yes");
                else
                    printf("no");
            printf("\n");
        }
    }
    return 0;
}