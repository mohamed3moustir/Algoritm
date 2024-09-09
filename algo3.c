#include<stdio.h>
int main(){

	int tablue[]={1,4,5,8,6,2,7,3};
	int n = sizeof(tablue)/sizeof(tablue[0]);
	int temp;
	for(int i=0;i<n-1;i++){
   for(int j=0;j<n-1;j++){
	if(tablue[j]>tablue[j+1]){
       temp=tablue[j];
	   tablue[j]=tablue[j+1];
	   tablue[j+1]=temp;
	}

   }

	}
	for(int j=0;j<n;j++){
		printf("%d -",tablue[j]);
	}

	return 0;
}
