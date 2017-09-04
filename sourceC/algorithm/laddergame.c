#include<stdio.h>

int arr[100000][2]; //연결다리 상태 
int main(void) {
	int k,n,p; //세로선의 갯수, 연결다리 갯수, 시작선 
	int i,pos1,pos2; //두개의 선번호 
	
	scanf("%d %d",&k,&n);
	
	for(i=0;i<n;i++) {
		scanf("%d %d",&pos1,&pos2);
		arr[i][0]=pos1;
		arr[i][1]=pos2;
	}
	
	scanf("%d",&p);
	
	for(i=0;i<n;i++) {
		//사다리의 시작은 p, 배열을 검사하면서
		//사다리의 번호가 바뀐다 
		if(arr[i][0]==p) {
			p=arr[i][1];
			arr[i][0]=arr[i][1]=0;
		} else if(arr[i][1]==p) {
			p=arr[i][0];
			arr[i][0]=arr[i][1]=0;
		}
	}//반복 
	printf("%d",p); 
}
