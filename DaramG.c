#include<stdio.h>
 
char arr[21][21]; //필드 

int main(void) {
	int n,i,j;
	int minDaramG=0; //최소필요한 다람쥐의 수 
	
	scanf("%d",&n); //n 입력 
	
	for(i=0;i<n;i++) {
		scanf("%s", &arr[i]);
		for(j=0;j<n;j++) {
			if(arr[i][j]=='C') minDaramG+=2; //C가 발견되면 필요한 다람쥐수 +2; 
			else if(arr[i][j]=='D') minDaramG--; //D가 발견되면 필요한 다람쥐수 -1; 
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(minDaramG>0) //더 필요한 다람쥐가 있다면 
				if(arr[i][j]=='.') {
					minDaramG--; //필요한 다람쥐수를 없애고, 배열에 넣는다. 
					arr[i][j]='D';
				}
		}
		printf("%s\n",arr[i]);
	}
		
}
