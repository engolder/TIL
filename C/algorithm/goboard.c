#include <stdio.h>

int a[19][19]; //�ٵ��� 
int main(void) {
	int n, i, j, x, y;
	
	for(i=0; i<19; i++)
	  for(j=0; j<19; j++)
	    scanf("%d", &a[i][j]); //�ٵ��ǻ��� �Է� 

	scanf("%d",&n);
	
	for(i=0; i<=n; i++) { //x, y��ǥ n�� �Է� 
		scanf("%d %d", &x, &y); 
		x--; //�ε����� ���� -1 
		y--;
		for(j=0; j<19; j++) { 
			if(a[x][j]==0) a[x][j]=1; //1->0,0->1 
			else a[x][j] = 0;
			if(a[j][y]==0) a[j][y]=1;
			else a[j][y] = 0;
		}
	}
	
	//��� 
	for(i=0;i<19;i++) {
		for(j=0;j<19;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
