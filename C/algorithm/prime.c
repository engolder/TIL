#include<stdio.h>

int main(void) {
	int n,i,j,flag; //flag:�Ҽ����� �ƴ����� ���� (1:�Ҽ����ƴ�)
	
	scanf("%d",&n);
	for(i=2;i<n;i++) { //2���� n������ �ڿ����� ������� 
		flag=0;
		for(j=2;j<i;j++) { //i�� ����� ����������� ����������
						   //�Ҽ��� �ƴϹǷ� flag�� 1����
			if(i%j==0) {
				flag=1;
				break;
			}
		}
		if(flag==0) printf("%d\t",i); //�Ҽ��� ���, �ƴϸ� X��� 
		else printf("%c\t",'X');
		if((i-1)%5==0) { //�� �ٿ� 5���� ��� 
			printf("\n");
		}
	}
}
