
#include<stdio.h>
#include<string.h>


int main(){

	char nams[50][100]={"mohamed","ali","kmal","said"};
	for(int i=0;i<4;i++){
   if(strcmp(nams[i],"ali")== 0){
	printf("found in %i",i);

   }

	}
	
	return 0;
}