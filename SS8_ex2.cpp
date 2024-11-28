#include <stdio.h>

int main(){
	int nhap;
	int chuoi[3]={3,6,9};
	printf("Moi ban nhap mot so bat ki tu 1 den 9 : ");
	scanf("%d",&nhap);
	for(int i=0;i<=3;i++){
		if(nhap==chuoi[i]){
			printf("Vi tri phan tu trong mang la %d",i);
			break;
		}else{
			printf("Phan tu khong co trong mang");
			break;
		}
	}
	return 0;
}
