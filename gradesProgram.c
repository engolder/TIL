#include<stdio.h>

//_student����ü����� student �ڷ��� 
typedef struct _student{
	int num;
	char name[5];
	int arg[3];
}student;

int main(void) {
	int i,j,sum;
	
	student list[5];
	
	for(i=0;i<5;i++) {
		printf("�й�:");
		scanf("%d",&(list[i].num));
		printf("�̸�:");
		scanf("%s",&(list[i].name));
		printf("����,����,���� ����:");
		for(j=0;j<3;j++)
			scanf("%d",&(list[i].arg[j]));
	}
	
	printf("������ ������>\n");
	for(i=0;i<5;i++) {
		sum=0;
		printf("%d ",list[i].num);
		pritnf("%s ",list[i].name);
		for(j=0;j<3;j++) {
			printf("%3d ",list[i].arg[j]);
			sum+=list[i].arg[j];
		}
		printf("%3d",sum);
		printf("%3.2f",sum/3.0);
		if(sum/3.0>=90) printf("A");
	}
}

