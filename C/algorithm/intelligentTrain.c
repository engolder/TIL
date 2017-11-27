#include<stdio.h>

int main(void) {
	int sum=0;
	int getoff,geton;
	int max=0;
	int i;
	
	for(i=0;i<4;i++) {
		scanf("%d %d",&getoff,&geton);
		sum-=getoff;
		sum+=geton;
		if(sum>max) max=sum;
	}
	printf("%d",max);
}
