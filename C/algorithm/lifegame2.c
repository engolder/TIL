#include<stdio.h>

int arr[172][172]; //�ִ� 170������ �ʵ�, �ʰ����� 2+ 
int printarr[172][172]; //����� ���� �ʵ�, temp�����ε� ���� 

int f(int i,int j){ //���� ���� 
	int k,l;
	int cnt=0;
	
	for(k=-1;k<2;k++) {
		for(l=-1;l<2;l++) {
			if(arr[i+k][j+l]==1) cnt++;
		}
	}
	return cnt;
}

int main(void) {
	int i,j;
	int a,b;
	int x,y,z;
	int k;
	
	//��,�� 
	scanf("%d %d",&a,&b);
	//����ü�� ���ܳ� ����, ����ü�� ������ ����, ����ü�� ���� ���� 
	scanf("%d %d %d",&x,&y,&z);
	
	for(i=1;i<=a;i++) {
		for(j=1;j<=b;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	scanf("%d",&k);
	while(k>0) { //k�� �ݺ� (k)���� ���� 
		for(i=1;i<=a;i++) {
			for(j=1;j<=b;j++) {
				
				//����ü�� �ƴ϶��, �ֺ��� �˻��Ͽ� ���� x��� ����ü��. 
				if(arr[i][j]==0) {
					if(f(i,j)==x) printarr[i][j]=1;
				} else {
					//����ü���, �ֺ��� �˻��Ͽ� y���� ũ�� z���� ���� ����� �������� 
					if(f(i,j)-1 >= y && f(i,j)-1 < z) printarr[i][j] = 1;
					//�ƴ϶�� ���� 
					else printarr[i][j] = 0;
				}	
			}
		}
		for(i=1;i<=a;i++) {
			for(j=1;j<=b;j++) {
				//�� ���밡 ��ȭ�Ǹ�, printarr�� arr�� �ٽÿŰܼ� �ݺ� 
				arr[i][j]=printarr[i][j];
			}
		}
		k--; //k�� ���� 
	}
	for(i=1;i<=a;i++) {
		for(j=1;j<=b;j++) {
			printf("%d ",printarr[i][j]);
		}
		printf("\n");
	}
	
}
