#include<stdio.h>

int main(void) {
	int n,i,j,flag; //flag:소수인지 아닌지의 상태 (1:소수가아님)
	
	scanf("%d",&n);
	for(i=2;i<n;i++) { //2부터 n까지의 자연수를 대상으로 
		flag=0;
		for(j=2;j<i;j++) { //i을 나누어서 나누어떨어지는 수가있으면
						   //소수가 아니므로 flag를 1으로
			if(i%j==0) {
				flag=1;
				break;
			}
		}
		if(flag==0) printf("%d\t",i); //소수면 출력, 아니면 X출력 
		else printf("%c\t",'X');
		if((i-1)%5==0) { //한 줄에 5개씩 출력 
			printf("\n");
		}
	}
}
