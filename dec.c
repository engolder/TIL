#include<stdio.h>

char arr[7]; //�Է¿� ���� ���ڿ� ���� 
main(void) {
	int n,i,sum=0;
	int flag[5]={0}; //�ش� ���ڿ��� �Է»��� 
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		scanf("%s",arr);
		switch(arr[0]) { //���ڿ��� ���¸� ��� 
			case 'g' : flag[0]=1;break;
			case 'm' : flag[1]=1;break;
			case 'l' : flag[2]=1;break;
			case 'd' : flag[3]=1;break;
			case 'n' : flag[4]=1;break;
		}
	}
	for(i=0;i<5;i++) { //�� ���µ��� ���ؼ� 
		sum+=flag[i];
	}
	//3�� ������ invalid�� ���, �׷��������� valid�� ��� 
	printf("%s",(sum>3)?"invalid":"valid");
}
