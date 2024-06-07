#include<stdio.h>
main(){
	int i;
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	
	printf("Elements In Reverse Number:\n");
	
	for(i=10-1; i>0; i--){
		printf("%d\n",array[i]);
	}
	printf("\n");
}