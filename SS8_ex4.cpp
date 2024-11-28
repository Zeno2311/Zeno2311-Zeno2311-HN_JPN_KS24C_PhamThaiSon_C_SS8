#include <stdio.h>
int main(){
	int mang[3][4]={{1,7,9,6},{3,8,6,2},{4,10,11,12}};
	int max=mang[0][0];
	for(int i=0;i<=3;i++){
		for(int j=0;j<=4;j++){
			if(max>mang[i][j]){
				max=mang[i][j];
			}
		}
	}
	printf("Gia tri lon nhat la %d");
	return 0;
}
