#include<stdio.h>

int arr[100000][2]; //����ٸ� ���� 
int main(void) {
	int k,n,p; //���μ��� ����, ����ٸ� ����, ���ۼ� 
	int i,pos1,pos2; //�ΰ��� ����ȣ 
	
	scanf("%d %d",&k,&n);
	
	for(i=0;i<n;i++) {
		scanf("%d %d",&pos1,&pos2);
		arr[i][0]=pos1;
		arr[i][1]=pos2;
	}
	
	scanf("%d",&p);
	
	for(i=0;i<n;i++) {
		//��ٸ��� ������ p, �迭�� �˻��ϸ鼭
		//��ٸ��� ��ȣ�� �ٲ�� 
		if(arr[i][0]==p) {
			p=arr[i][1];
			arr[i][0]=arr[i][1]=0;
		} else if(arr[i][1]==p) {
			p=arr[i][0];
			arr[i][0]=arr[i][1]=0;
		}
	}//�ݺ� 
	printf("%d",p); 
}
