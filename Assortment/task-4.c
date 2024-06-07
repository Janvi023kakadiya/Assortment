#include<stdio.h>
main(){
	int i;
	int array[10]={23,56,6,45,345,56,789,54,44,1011};
	
	int min=array[0];
	int max=array[0];
	
	
    for (i = 1; i < 10; i++) { 
        if (array[i] < min) {
            min = array[i]; 
        }
        if (array[i] > max) {
            max = array[i]; 
        }
    }
		printf("Minimum elements in array=%d\n",min);
		printf("Maximum elements in array=%d\n",max);	
}


