#include<stdio.h>
#include<string.h>
int main(){
	int count=0, i;
	char s[100], p[1000];
	scanf("%s", s);
	for(i=0; s[i] != '\0';i++){
		s[i] = tolower(s[i]);
	}
	while(1){
		scanf("%s", p);
		if(strcmp(p, "END_OF_TEXT") == 0) {break;}
		for(i=0; p[i] != '\0';i++){
			p[i] = tolower(p[i]);
		}
		if(strcmp(s, p) == 0) {count++;}
	}
	printf("%d\n", count);
}
