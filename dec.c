#include<stdio.h>

char arr[7]; //입력에 사용될 문자열 변수 
main(void) {
	int n,i,sum=0;
	int flag[5]={0}; //해당 문자열의 입력상태 
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		scanf("%s",arr);
		switch(arr[0]) { //문자열의 상태를 등록 
			case 'g' : flag[0]=1;break;
			case 'm' : flag[1]=1;break;
			case 'l' : flag[2]=1;break;
			case 'd' : flag[3]=1;break;
			case 'n' : flag[4]=1;break;
		}
	}
	for(i=0;i<5;i++) { //총 상태들을 더해서 
		sum+=flag[i];
	}
	//3이 넘으면 invalid를 출력, 그렇지않으면 valid를 출력 
	printf("%s",(sum>3)?"invalid":"valid");
}
