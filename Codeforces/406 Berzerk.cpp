#include <bits/stdc++.h>

#define MAXN (7010)

int n;
int k[2], f[2][MAXN], cnt[2][MAXN], s[2][MAXN];

//0, 1, 2 means Loop, Lose, Win

void dfs(int p, int u){
	if(f[p][u] == 1){
		p ^= 1;
		for(int i = 1; i <= k[p]; ++ i){
			int v = u - s[p][i];
			if(v <= 0) v += n;
			if(!f[p][v]){
				f[p][v] = 2;
				dfs(p, v);
			}
		}
	}
	else{        //f[p][u] == 2
	    p ^= 1;
		for(int i = 1; i <= k[p]; ++ i){
			int v = u - s[p][i];
			if(v <= 0) v += n;
			cnt[p][v] ++;
			if(!f[p][v] && cnt[p][v] == k[p]){
				f[p][v] = 1;
				dfs(p, v);
			}
		}
	}
}

int main(){
	scanf("%d%d", &n, &k[0]);
	for(int i = 1; i <= k[0]; ++ i){
		scanf("%d", s[0] + i);
	}
	scanf("%d", &k[1]);
	for(int i = 1; i <= k[1]; ++ i){
		scanf("%d", s[1] + i);
	}
	f[0][1] = f[1][1] = 1;
	dfs(0, 1);
	dfs(1, 1);
	for(int i = 2; i <= n; ++ i){
		switch(f[0][i]){
			case 0: printf("Loop "); break;
			case 1: printf("Lose "); break;
			case 2: printf("Win ") ; break;
		}
	}
	printf("\n");
	for(int i = 2; i <= n; ++ i){
		switch(f[1][i]){
			case 0: printf("Loop "); break;
			case 1: printf("Lose "); break;
			case 2: printf("Win ") ; break;
		}
	}
	printf("\n");
    return 0;
}