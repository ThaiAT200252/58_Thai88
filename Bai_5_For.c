#include<stdio.h>
int main(){
	int n, i;
	printf("Nhap vao so n bat ki :");
	scanf("%d", &n);
	printf("Cac uoc cua n lan luot la:\t");
	for(int i=1; i<= n; i++){
		if(n%i ==0){
			printf("%d\t", i);
		}
	}
}