#include<stdio.h>

int arr[4][4]; //�Է¹��� 2�����迭 
int value[16]; //�������� ������ 1�����迭 
int main(void) {
	int n;
	int cnt=0; //2�������� 1�����迭�� �ѱ��, ���̸� ������� 
	int i,j,k;
	int s=0; //1���� �迭�� ��� ��Ұ� �Ѱ����� �ƴ��� �˻� 
	
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			scanf("%d",&arr[i][j]);
			//2�������� �Է��� �ް�, 0�̾ƴϸ� 1�����迭�� 
			if(arr[i][j]!=0) value[cnt++]=arr[i][j];
		}
	}
	
	for(k=0;k<cnt;k++) {
		//�ݺ� 
		for(i=0;i<cnt;i++) {
			//�ε����� 0���� �ִ���̱��� 
			for(j=0;j<cnt;j++) {
				//i�� �ε����� j�� �ε����� ���� �迭�� ���ؼ�,
				//������ ���� ���ؼ� �Ѱ��� ���� 
				if(value[i]==value[j]&&i!=j) {
					value[i]=0;
					value[j]*=2;
					break;
				}
				//ex) 2204 -> 0404 -> 0008
			}
		}
	}
	for(i=0;i<cnt;i++) {
		if(value[i]) s++;
		//�迭�� �˻��ؼ� ��Ұ� 1�����ƴ��� Ȯ�� 
	}
	if(s==1) printf("yes");
	else printf("no");
}
