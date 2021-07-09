#include <cstdio>
#include <cstring>

int main()
{
	char word[105];
	scanf("%s", word);
	int n;
	scanf("%d", &n);
	int j=strlen(word);
	for(int i=0; i<j; i++){
		int a=word[i];
		a+=n;
		if (a>122){
			a%=122;
			a+=96;
			printf("%c",a);
		} else{
			printf("%c",a);
		}
	}
	printf("\n");
	return 0;
}