#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
	char s[101];
	int a;
	scanf("%s", s);
	a=strlen(s);
	for(int i=0; i<a; i++){
		if(s[i]<=90){
			s[i]=tolower(s[i]);
		} else{
			s[i]=toupper(s[i]);
		}
	}
	printf("%s\n", s);
	return 0;
}