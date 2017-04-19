#include <bits/stdc++.h>
 
 using namespace std;
 
 int gcd(int a,int b)
 {
 	if(0==b) return a;
 	return gcd(b, a%b);
 }
 
 int main()
 {
 	int a, b;
 	scanf("%d %d", &a, &b);
 	printf("%d\n", gcd(a,b));
 	return 0;
 }
