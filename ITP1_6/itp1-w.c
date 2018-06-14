#include<stdio.h>
int main(){
	int a[3][10]={}, b[3][10]={}, c[3][10]={}, d[3][10]={}, n, f, r, v, w, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d", &f, &r, &v, &w);
		if(f==1){
			a[r-1][v-1]=a[r-1][v-1]+w;
		}else if(f==2){
			b[r-1][v-1]=b[r-1][v-1]+w;
		}else if(f==3){
			c[r-1][v-1]=c[r-1][v-1]+w;
		}else if(f==4){
			d[r-1][v-1]=d[r-1][v-1]+w;
		}
	}
	for(i=0;i<12;i++){
		if(i!=0 && i%3==0){
			for(j=0;j<20;j++){
				printf("#");
			}
			printf("\n");
		}
		for(j=0;j<10;j++){
			if(i<3){
				printf(" %d", a[i][j]);
			}else if(i<6){
				printf(" %d", b[i-3][j]);
			}else if(i<9){
				printf(" %d", c[i-6][j]);
			}else if(i<12){
				printf(" %d", d[i-9][j]);
			}
		}
		printf("\n");
	}
}
