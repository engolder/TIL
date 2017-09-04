#include<stdio.h>

int arr[101][101];

int main(void) {
	int h,w,n,l,d,x,y,i,j;
	
	scanf("%d %d",&h,&w);
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		scanf("%d %d %d %d",&l,&d,&y,&x);
		for(j=0;j<l;j++) {
			if(d) {
				arr[y+j][x]=1;
			} else {
				arr[y][x+j]=1;	
			}
		}
	}
	
	for(i=1;i<=h;i++) {
		for(j=1;j<=w;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
