#include <stdio.h>
int main(){
	int mang[3][3]={
	{4,6,9},
	{3,11,6},
	{4,11,192}
	};
	int tong,n=3;
	for(int i=0;i<=n-1;i++){
		printf("Gia tri %d la %d\n",i,mang[i][i]);
		tong+=mang[i][i];
	}
	printf("Tong cac gia tri tren duong cheo la : %d",tong);			
	return 0;	
		
}
