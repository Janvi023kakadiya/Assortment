#include<stdio.h>
main(){
	int i,j;
	int rows=4;
	int cols=4;
	int array[4][4]={
						{34,45,98,49},
						{453,56,445,34},
						{13,34,556,567},
						{345,2331,45,5},
						
					};
		int max = array[0][0];
		for(i=0; i<rows; i++){
			for(j=0; j<cols; j++){
				if(array[i][j]>max){
					max=array[i][j];
				}
			}
		}
		printf("The largest Number in Array;%d\n",max);
}

