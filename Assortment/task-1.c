#include<stdio.h>
main(){
	 
	 int i;
	 int array[13]={31,-23,34,57,-364,-34,-45,65,86,-87,-66,76,-31};
	 
	 printf("All Negative Elements:");
	 for(i=0; i<13; i++){
	 	if(array[i]<0){
		 printf("\t%d",array[i]);
		 }
	 }
	 
}