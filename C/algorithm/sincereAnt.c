#include<stdio.h>

int arr[10][10]; //미로 상자 

int main(void) {
	int i,j;
	
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	i=j=1;
	
	while(arr[i][j]==0) { //현재가 0일때(빈공간)만 이동 
		arr[i][j]=9; //이동한 경로를 9로 교체 
		if(arr[i][j+1]==0) { //오른쪽이 0이라면 이동 
			j++;
		} else if(arr[i+1][j]==0) { //아니고, 아래가 0이라면 이동 
			i++;
		} else if(arr[i][j+1]==2) { //아니고, 오른쪽이 2라면 이동,종료 
			arr[i][j+1]=9;행 
			break;
		} else if(arr[i+1][j]==2) { //아니고, 아래가 2라면 이동,종료 
			arr[i+1][j]=9;
			break;
		}
		
		//오른쪽우선, 벽(1)이라면 조건문이 작용하지 않아서
		//다음 조건문을 실 
	}
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			printf("%d ",arr[i][j]); //출력 
		}
		printf("\n"); 
	}
}
