#include<stdio.h>
main(){
	int i;
	int sum=0;
	int array[12]={23,31,25,1,12,34,44,56,89,67,11,34};
	
	for(i=0; i<12; i++){
		sum += array[i];
	}
	printf("Sum Of All Elements:%d\n",sum);
}