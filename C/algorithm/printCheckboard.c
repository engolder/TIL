#include<stdio.h>

int main(void) {
	int w,h; //체크 보드의 크기 
	int bw,bh; //한 칸의 크기 
	int i,j,k,l; //인덱스 
	int s=1; //어떻게 출력할지의 여부
	//1이면 X,0이면 .출력 
	
	scanf("%d %d",&h,&w);
	scanf("%d %d",&bh,&bw);
	
	if(w%2==1)s=0; //만약 홀수라면 기본값 0 
	 
	for(i=0;i<h;i++) { //체크보드 행만큼반복 
		s=!s; //한 칸을 출력하면 s를 뒤집음 
		for(j=0;j<bh;j++) { //한 칸의 행만큼 반복 
			if(w%2==1)s=!s; //홀수라면 뒤집음 
			for(k=0;k<w;k++) { //체크보드 열만큼 바복 
				s=!s;
				for(l=0;l<bw;l++) { //한 칸의 열만큼 반복 
					if(s) printf("X");
					else printf(".");
				}
			}
			printf("\n"); //개행 
		}
	}
}
