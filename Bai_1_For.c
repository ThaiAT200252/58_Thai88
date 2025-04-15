#include<stdio.h>
#include<math.h>
int main(){
    int i, tong =0;
    int mang[10];
    printf("nhap vao 10 so bat ki tu ban phim:\n ");
    for(i = 0; i<10 ;i++){
    	printf("nhap vao so thu %d: ", i+1);
        scanf("%d", &mang[i]);
        tong+=mang[i];
    }
    printf("tong ua 10 so bat ki la: %d",tong);
}