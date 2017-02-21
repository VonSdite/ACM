#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

//typedef long long LL;
const int Max = 1e9;

long long f2[32] , f3[32] , f5[32] , f7[33] , sum[10000] , ans;
int p = 0;

void init1()
{
    f2[0] = f3[0] = f5[0] = f7[0] = 1;
    for(int i = 1 ; i <= 32 ; i++) {
        f2[i] = f2[i - 1] * 2;
        if(f2[i] > Max) break;
    }
    for(int i = 1 ; i <= 32 ; i++){
        f3[i] = f3[i - 1] * 3;
        if(f3[i] > Max) break;
    }
    for(int i = 1 ; i <= 32 ; i++){
        f5[i] = f5[i - 1] * 5;
        if(f5[i] > Max) break;
    }
    for(int i = 1 ; i <= 32 ; i++){
        f7[i] = f7[i - 1] * 7;
        if(f7[i] > Max) break;
    }
}

void init2()
{
    //long long ans = 1;
    for(int i = 0 ; i < 32 ; i++){//一开始我都是32，但是后来发现程序会运行不了，还是好好的算一下到底是多少吧
        for(int j = 0 ; j < 20 ; j++){
            for(int k = 0 ; k < 14 ; k++){
                for(int l = 0 ; l < 12 ; l++){
                    ans = f2[i]*f3[j]*f5[k]*f7[l];
                    if(ans > Max || ans < 0) continue;
                    else sum[p++] = ans;
                }
            }
        }
    }
    sort(sum , sum + p);
}

int main()
{
    int t , n ;  init1();
    init2();
    scanf("%d",&t);

    //for(int i = 0 ; i < p ; i++) printf("%I64d\n",sum[i]);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",sum[lower_bound(sum , sum + p , n) - sum]);
    }
    return 0;
}