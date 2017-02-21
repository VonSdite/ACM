#include "stdio.h"

typedef struct MILK
{
	char name[102];
	int price;
	int volume;
	int day;
	double day_price;
}milk_t;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		milk_t milk[100];
		scanf("%d", &n);
		int i;
		for(i=0;i<n;i++) 
		{
			scanf("%s %d %d", milk[i].name, &milk[i].price, &milk[i].volume);
			if(milk[i].volume>=200)
			{
				if(milk[i].volume>=1000) milk[i].day=5;
				else if(milk[i].volume<1000) milk[i].day=milk[i].volume/200;
				milk[i].day_price=(double)milk[i].price/milk[i].day;
			}
			else milk[i].day_price=9999999;
		}
		int max=0;
		for(i=1;i<n;i++)
		{
			if(milk[max].day_price>milk[i].day_price) max=i;
			else if(milk[max].day_price==milk[i].day_price)
			{
				if(milk[max].volume<milk[i].volume) max=i;
			}
		}
		puts(milk[max].name);
	}
	return 0;
}