#include<stdio.h>

char arr[100][100]; //n*n������ 
char temp[100][100]; //SpinAndSlide�� ���� �ӽð����� 
int n;

int move(int j) {
	int i,l;
	char tmp; //�ӽ� ���� 
	
	//.�� ���簡�� �� ��ŭ �ݺ�
	//����ȭ�ʿ� 
	for(l=0;l<n;l++) {
		
		//�ǾƷ��� ���� ����
		for(i=0;n-i-2>=0;i++) { 
			//���� .�� �ִٸ� �ֻ����� �ű�
			//����ȭ�ʿ� 
			if(temp[n-i-1][j]=='.') {
				tmp=temp[n-i-1][j];
				temp[n-i-1][j]=temp[n-i-2][j];
				temp[n-i-2][j]=tmp;
			}
		}
	}
}

int main(void) {
	int i,j,k;
	int number; //SpinAndSlide Ƚ�� 
	
	scanf("%d",&n);
	scanf("%d",&number);
	for(i=0;i<n;i++) {
		scanf("%s",&arr[i]);
	}
	
	for(k=0;k<number;k++) {
		
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				//�������� ������ 90�� ȸ������
				//�ӽð����ǿ� ���� 
				temp[j][n-i-1]=arr[i][j];
			}
		}
		
		for(j=0;j<n;j++) { 
			//�ӽð������� ���� �� ��ŭ
			//�ݺ��ؼ� �Լ�ȣ�� 
			move(j);
		}
		
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				arr[i][j]=temp[i][j];
			}
		}
	}
	
	for(i=0;i<n;i++) {
		printf("%s\n",arr[i]);
		//��� 
	}
}
