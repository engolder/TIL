#include<stdio.h>

char arr[31][31]; //2���� ���ڰ��� 

int lightf(int light) { //1..2..3..4..1..2..3..4 
	if(light>4) return 1;
	else if(light<1) return 4;
	return light;
}

int main(void) {
	int w,h; //����,���� 
	int i,j;
	int mw,mh; //�ſ�(O)���ִ� �ε��� 
	int light; //���� ����(��,��,��,��)
	
	
	//���α���, ���α���, ���ڻ����Է� 
	scanf("%d %d",&w,&h);
	
	for(i=0;i<h;i++) {
		scanf("%s",arr[i]);
		for(j=0;j<w;j++) {
			if(arr[i][j]=='O') {
				mh=i;
				mw=j;
			}
		}
	}
	
	
	//�ʱ� �ε����� �ſ��, ���ǻ��´� ��(1)���� 
	i=mh;
	j=mw;
	light=1; 
	
	while(1) {
		
		//���� ���ڰ����� �����ԵǸ�, �ݺ���Ż�� �� ��� 
		if(i<0) { 
			printf("U %d",j);
			break;
		} else if(i==h) {
			printf("D %d",j);
			break;
		} else if(j<0) {
			printf("L %d",i);
			break;
		} else if(j==w) {
			printf("R %d",i);
			break;
		}
		
		//���� �����ϴٰ� '\'�� '/'�� �����ԉ�����,
		//���� Ȧ��,¦�����¿����� ���� ���°� ���Ѵ�.
		//	������� ��(1)�� ������ ���� /�� ������ Ȧ���̱⶧����
		//	+1�� �ؼ� ���� ��(2)���°� �ȴ�. 
		
		if(arr[i][j]=='\\') { 
			if(light%2==1) light=lightf(light-1);
			else light=lightf(light+1);
		} else if(arr[i][j]=='/') {
			if(light%2==0) light=lightf(light-1);
			else light=lightf(light+1);
		}

		//���ǹ������� �ε������� 1����
		if(light==1) i--;
		else if(light==2) j++;
		else if(light==3) i++;
		else if(light==4) j--;
	}
}
