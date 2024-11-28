#include <stdio.h>
int main(){
	int mang[3][4]={
	{1,7,9,6},
	{3,8,6,2},
	{4,10,11,12}};
	int sum,cottrai,cotphai;
	
	cottrai=mang[0][0]+mang[0][1]+mang[0][2];
	cotphai=mang[3][0]+mang[3][1]+mang[3][2];
	sum=cottrai + cotphai;
	
	printf("Tong cac phan tu tren duong bien cua ma tran la %d",sum);
	return 0;
}

