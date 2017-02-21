#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
int m;
struct hui {
	int num1;
	char num[7];
	char c[15];
	int sco;
} s1[100010];
bool skt(hui s2, hui s3) {
	if (m == 1)return s2.num1 < s3.num1;
	if (m == 2) {
		if (strcmp(s2.c, s3.c) == 0)return s2.num1 < s3.num1;
		return strcmp(s2.c, s3.c) < 0;
	}
	if (m == 3) {
		if (s2.sco == s3.sco)return s2.num1 < s3.num1;
		return s2.sco < s3.sco;
	}
}
int main() {
	int n, k, j, i, a1 = 0, a2;
	while (cin >> n >> m, n || m) {
		a1++;
		for (i = 0; i < n; i++) {
			s1[i].num1 = 0;
			scanf("%s%s%d", &s1[i].num, &s1[i].c, &s1[i].sco);
			for (j = 0; j < strlen(s1[i].num); j++)
				s1[i].num1 = s1[i].num1 * 10 + s1[i].num[j] - 48;
		}
		sort(s1, s1 + i, skt);
		printf("Case %d:\n", a1);
		for (i = 0; i < n; i++)
			printf("%s %s %d\n", s1[i].num, s1[i].c, s1[i].sco);
	}
	return 0;
}