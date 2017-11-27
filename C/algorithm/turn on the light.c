#include<stdio.h>

char arr[31][31]; //2차원 격자공간 

int lightf(int light) { //1..2..3..4..1..2..3..4 
	if(light>4) return 1;
	else if(light<1) return 4;
	return light;
}

int main(void) {
	int w,h; //가로,세로 
	int i,j;
	int mw,mh; //거울(O)가있는 인덱스 
	int light; //빛의 상태(북,동,남,서)
	
	
	//가로길이, 세로길이, 격자상태입력 
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
	
	
	//초기 인덱스를 거울로, 빛의상태는 북(1)으로 
	i=mh;
	j=mw;
	light=1; 
	
	while(1) {
		
		//빛이 격자공간을 나가게되면, 반복문탈출 및 출력 
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
		
		//빛이 진행하다가 '\'와 '/'를 만나게됬을때,
		//빛의 홀수,짝수상태에따라서 빛의 상태가 변한다.
		//	예를들어 북(1)인 상태의 빛이 /를 만나면 홀수이기때문에
		//	+1을 해서 빛이 동(2)상태가 된다. 
		
		if(arr[i][j]=='\\') { 
			if(light%2==1) light=lightf(light-1);
			else light=lightf(light+1);
		} else if(arr[i][j]=='/') {
			if(light%2==0) light=lightf(light-1);
			else light=lightf(light+1);
		}

		//빛의방향으로 인덱스값을 1증가
		if(light==1) i--;
		else if(light==2) j++;
		else if(light==3) i++;
		else if(light==4) j--;
	}
}
