#include<stdio.h>

int arr[27][27]; //25*25 �ʵ�, 1ĭ�� ������ �ʰ��ؼ� �����ϱ⶧���� �糡�� 1��+ 
int printarr[27][27]; //����� ���� �ʵ� �������� �ʵ尡 ����� 

int f(int i,int j){  //9ĭ�� Ȯ���Ͽ� ����ü�� ���� ī��Ʈ�ؼ� ������ 
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
	
	for(i=1;i<26;i++) { //�ʵ� �Է� 
		for(j=1;j<26;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=1;i<26;i++) { 
		for(j=1;j<26;j++) {
			
			//2�����迭�� �ϳ���Ȯ���ϸ�
			//����ü�� �ƴ϶�� �ֺ�8ĭ ����ü�� 3�̸� ����ü�� 
			if(arr[i][j]==0) {
				if(f(i,j)==3) printarr[i][j]=1;
			} else {
				//����ü��� �ֺ� 8ĭ ����ü�� 2�Ǵ� 3�̸� ����ü�� 
				if(f(i,j)-1 == 2 || f(i,j)-1 == 3) printarr[i][j] = 1;
				else printarr[i][j] = 0;
			}
			//��� 
			printf("%d ",printarr[i][j]);
		}
		//���� 
		printf("\n");
	}
}
