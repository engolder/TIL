#include<stdio.h>
 
char arr[21][21]; //�ʵ� 

int main(void) {
	int n,i,j;
	int minDaramG=0; //�ּ��ʿ��� �ٶ����� �� 
	
	scanf("%d",&n); //n �Է� 
	
	for(i=0;i<n;i++) {
		scanf("%s", &arr[i]);
		for(j=0;j<n;j++) {
			if(arr[i][j]=='C') minDaramG+=2; //C�� �߰ߵǸ� �ʿ��� �ٶ���� +2; 
			else if(arr[i][j]=='D') minDaramG--; //D�� �߰ߵǸ� �ʿ��� �ٶ���� -1; 
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(minDaramG>0) //�� �ʿ��� �ٶ��㰡 �ִٸ� 
				if(arr[i][j]=='.') {
					minDaramG--; //�ʿ��� �ٶ������ ���ְ�, �迭�� �ִ´�. 
					arr[i][j]='D';
				}
		}
		printf("%s\n",arr[i]);
	}
		
}
