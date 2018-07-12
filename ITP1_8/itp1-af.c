#include<stdio.h>
#include<string.h>
int main(){
	char s[100], p[100], cp[200];
	scanf("%s %s", s, p);
	strcpy(cp, s);
	strcat(cp, s);
	if ( strstr(cp, p) == NULL ) printf("No\n");
	else printf("Yes\n");
}
