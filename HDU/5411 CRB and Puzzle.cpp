#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int mod = 2015;
int N,M;
struct Matrix
{
	int M[55][55];
	Matrix(){memset(M,0,sizeof(M));}
}U,P;

Matrix Add(const Matrix &a,const Matrix &b)
{
	Matrix ret;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			ret.M[i][j]=(a.M[i][j]+b.M[i][j])%mod;
	return ret;
}

Matrix Multi(const Matrix &a,const Matrix &b)
{
	Matrix ret;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			for(int k=1;k<=N;k++)
				ret.M[i][j]+=a.M[i][k]*b.M[k][j];
			ret.M[i][j]%=mod;
		}
	}
	return ret;
}
Matrix Pow(Matrix f,int n)  //f^n,U为单位矩阵 
{
	Matrix ret=U;
	while(n)
	{
		if(n&1)
			ret=Multi(ret,f);
		n>>=1;
		f=Multi(f,f);
	}
	return ret;
}

Matrix solve(int n) //等比数列求和
{
	if(n==1)
		return P;
	Matrix temp=solve(n>>1);
	if(n&1)
	{
		Matrix t=Pow(P,n/2+1);
		return Add(Add(Multi(temp,t),temp),t);
	}
	else
		return Add(temp,Multi(temp,Pow(P,n>>1)));
}

int main()
{
	int ncase,i,j,k,x;
	for(i=0;i<55;i++)
		U.M[i][i]=1;
	scanf("%d",&ncase);
	while(ncase--)
	{
		scanf("%d%d",&N,&M);
		memset(P.M,0,sizeof(P.M));
		for(i=1;i<=N;i++)
		{
			scanf("%d",&k);
			while(k--)
			{
				scanf("%d",&x);
				P.M[i][x]=1;
			}
		}
		if(M==1)
		{
			printf("%d\n",N+1);
			continue ;
		}
		Matrix temp=solve(M-1);
		int ans=N+1;
		for(i=1;i<=N;i++)
			for(j=1;j<=N;j++)
				ans+=temp.M[i][j];
		printf("%d\n",ans%mod);
	}
	return 0;
}