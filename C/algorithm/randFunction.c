#include<stdio.h>
#include<stdlib.h> //rand()�Լ��� ����ϱ����� 
#include<time.h>  //time()�Լ��� ����ϱ����� 

int lotto[6]; //�Է¹��� �迭 
int randnum[6];
int main(void) {
	int i,j;
	int cnt=0; //��ġ�� �� 
	int f=0; //�ߺ� ���� 
	
	printf("������ �ζ� ��ȣ : ");
	for(i=0;i<6;i++) {
		scanf("%d",&lotto[i]); //6�� �Է� 
	}
	
	srand(time(NULL)); //�Ź� �ٸ����� �������� �õ带 �ٲپ��� 
	
	i=0; //�ε��� �ʱ�ȭ 
	
	printf("��÷�� �ζ� ��ȣ : ");
	while(i<6) {
		f=0; //���� �ʱ�ȭ 
		
		randnum[i]=(rand()%45)+1; //�����迭�� �������� �ְ� 
		
		for(j=0;j<i;j++) {
			if(randnum[i]==randnum[j]) { //���� �̹� ���Դ� ����� 
				f=1;
				break;
			}
		}
		if(f) continue; //��ݺ� 
		
		//�ߺ����� �ʾҴٸ� ��� 
		printf("%d ",randnum[i]);
		
		for(j=0;j<6;j++)  { //������ ���ڸ� lotto�� ���� ��
			if(lotto[j]==randnum[i]) cnt++; //���ٸ� ī��Ʈ+1
		}
		
		i++;
	}
	
	printf("\n��ġ�ϴ� ������ ���� : %d",cnt);
}
