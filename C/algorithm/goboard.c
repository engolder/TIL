#include <stdio.h>

int a[19][19]; //바둑판 
int main(void) {
	int n, i, j, x, y;
	
	for(i=0; i<19; i++)
	  for(j=0; j<19; j++)
	    scanf("%d", &a[i][j]); //바둑판상태 입력 

	scanf("%d",&n);
	
	for(i=0; i<=n; i++) { //x, y좌표 n개 입력 
		scanf("%d %d", &x, &y); 
		x--; //인덱스를 위해 -1 
		y--;
		for(j=0; j<19; j++) { 
			if(a[x][j]==0) a[x][j]=1; //1->0,0->1 
			else a[x][j] = 0;
			if(a[j][y]==0) a[j][y]=1;
			else a[j][y] = 0;
		}
	}
	
	//출력 
	for(i=0;i<19;i++) {
		for(j=0;j<19;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
