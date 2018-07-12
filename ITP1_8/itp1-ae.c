#include<stdio.h>
int main(){
	int i, count[26]={};
	char s;
	while(1){
		if(scanf("%c", &s)==EOF) break;
		if(s>='A' && s<='Z') s+=32;
		int num = s - 'a';
		count[num]++;
	}
	for(i=0;i<26;i++){	
		printf("%c : %d\n",'a'+i, count[i]);
	}
}
