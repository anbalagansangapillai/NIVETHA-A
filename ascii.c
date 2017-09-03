#include <stdio.h>

int main(){
	unsigned char s;		
	
	ch=32; 
	while(s<=127){
		printf("%c [%03d] ",s,s);
		s++;
	}
	printf("\n");
	
	return 0;
}
