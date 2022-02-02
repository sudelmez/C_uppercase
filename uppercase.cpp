#include <stdio.h>
int main(){
	int i=0;
	int say=0;
	char cumle[25];
	printf("bir cumle giriniz:");
	gets(cumle);
	
	printf("Buyuk harfler:");
	while(cumle[i]!='\0'){
		if((cumle[i]>'A')&&(cumle[i]<'Z')){
			say++;
			printf("%c,",cumle[i]);
		}
		i++;
	}
	printf("\nBuyuk harf sayisi:%d",say);
	

	
	return 0;
}
