#include<stdio.h>

int arr[5][5]; //������ 
int test[25]; //��¿� ������ 

int f() {
	int flag=0; //�ϼ��� ���� �� 
	int i,j;
	int s; //���� �˻��ϴ� ���� ���� 
	for(i=0;i<5;i++) { 
		s=1;//1�� �ʱ�ȭ 
		for(j=0;j<5;j++) { //�� �������� ��� 0�̶�� 
			if(arr[i][j]) s=0;
		}
		//�ϼ��� ���� �� +1 
		if(s) flag++;
		
		s=1;
		for(j=0;j<5;j++) { //�� �������� ��� 0�̶�� 
			if(arr[j][i]) s=0;
		}
		//+1
		if(s) flag++;
		 
	}
	
	s=1;//1�� �ʱ�ȭ 
	for(i=0;i<5;i++) { //�밢�� (���������� ���)�� 0�̶�� 
		if(arr[i][i]) s=0;
	}
	//+1
	if(s) flag++;
	
	s=1;//1�� �ʱ�ȭ 
	for(i=4;i>=0;i--) {//�밢�� (������������ ���)�� 0�̶�� 
		if(arr[i][4-i]) s=0;
	}
	//+1
	if(s) flag++;
	
	return flag; //�ϼ��� ���� ���� ���� 
}

int main(void) {
	int i,j,k;
	
for(i=0;i<5;i++) { //������ �Է� 
		for(j=0;j<5;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(k=0;k<25;k++) { //�θ��� �� �Է� 
		scanf("%d",&test[k]);
	}
	
	for(k=0;k<25;k++) { //�θ� ��(k)��ŭ �ݺ� 
		for(i=0;i<5;i++) { //��������ü Ž�� 
			for(j=0;j<5;j++) {
				if(test[k]==arr[i][j]) break; //ã�Ҵٸ� Ż�� 
			}
			if(test[k]==arr[i][j]) break; //Ż�� 
		}
		if(test[k]==arr[i][j]) arr[i][j] = 0; //0���� �ʱ�ȭ, 
		if(f()>=3) break; //�������� �ϼ��� ���� 3�̻��̶�� ���� 
	}
	printf("%d\n",k+1); //k+1�� ��� 
}
