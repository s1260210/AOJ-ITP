#include<stdio.h>
int main(){
	char ch;
	while(1){
		scanf("%c", &ch);
		if ('a' <= ch && ch <= 'z') {
			ch -= 32;
		}else if('A' <= ch && ch <= 'Z') {
			ch += 32;
		}
		if(ch == '\n') break;
		printf("%c", ch);
	}
	printf("\n");
}

