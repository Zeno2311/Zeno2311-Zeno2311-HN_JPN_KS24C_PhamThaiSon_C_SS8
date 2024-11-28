#include <stdio.h>

int main(){
	int mang[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			printf("%d",mang[i][j]);
			if(j==4){
				printf("\n");
			}
		}
	}
	return 0;
}
