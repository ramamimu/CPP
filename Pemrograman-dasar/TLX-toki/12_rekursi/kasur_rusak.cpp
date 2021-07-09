#include <cstdio>
#include <string.h>
#include <math.h>

int polindrom(char s[101]){
//	int acuan=0;
	int n=int(strlen(s));
	int batas= floor(n/2);
	for (int i=0; i<batas; i++){
		if (s[i]==s[(n-1)-i]){
			continue; //acuan+=1;
		} else {
			return 0;
		}
	}
	return 1;
}

int main (){
	char s[101];
	scanf("%s", s);
	if(polindrom(s)){
		printf("YA\n");
	} else {
		printf("BUKAN\n");
	}	
	return 0;
}