#include<stdio.h>

int arr[1000][2]; //������¸� �Է¹޴� 2�����迭 
int comf[1000]; //n��° ��ǻ���� ���� 1�� ����, 0 �� �񰨿� 
int main(void) {
	int computer; //��ǻ���� ���� 
	int couple; //����� ��ǻ���� �� 
	int i,j;
	int cnt=0; //������ ��ǻ���� �� 
	
	scanf("%d",&computer);
	scanf("%d",&couple);
	
	for(i=0;i<couple;i++) {
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}
	
	comf[1] = 1; //ù��° ��ǻ�ʹ� ���� 
	
	for(i=0;i<couple;i++) { 
		for(j=0;j<couple;j++) {
			//���� ���¿��� �ϳ��� ������ ��ǻ�Ͷ�� �Ѵ� ������Ų�� 
			if(comf[ arr[j][0] ] == 1 || comf[ arr[j][1] ] == 1 ) {
				comf[ arr[j][0] ]=comf[ arr[j][1] ]=1;
			}
		}
	}//�ݺ� 

	for(i=2;i<=computer;i++) {
		if(comf[i]==1) cnt++;
	}//������ �� 
	printf("%d",cnt);
}
