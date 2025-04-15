#include<stdio.h>
int main()
	{
	int n = 100, tong  =0;
	for(int i = 1; i<=n; i++){
		if(i%2==1){
			tong+=i;
		}
	}
	printf("tong cac so le tu 1 den 100 la: %d",tong);
	}