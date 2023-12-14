#include<stdio.h>
main(){
	
int i,j,array[3][3];
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Enter your values of array [%d][%d] :",i,j);
		scanf("%d",&array[i][j]);
	}
}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d",array[i][j]);
			}printf("\n");	}
	
	}
