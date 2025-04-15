#include<stdio.h>
#include<math.h>
int findSNT(int n){
	if(n<=1){
		return 0;
	}
	if(n>1){
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}
int main(){
	int n;
	printf("Nhap vao so can kiem tra: ");
	scanf("%d", &n);
	if(findSNT(n)){
		printf("%d la so nguyen to!", n);
	}
	else{
		printf("%d khong la so nguyen to!", n);
	}
	return 0;
}
