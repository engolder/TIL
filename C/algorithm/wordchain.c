#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* arr[100];
char temp[80];

int main(void){
	int i=0,j,flag;
		
	while(1) {
		flag=0;
		printf("�ܾ��Է� : ");
		gets(temp);
		arr[i]=(char*) malloc(strlen(temp)+1);
		strcpy(arr[i],temp);
		
		if(!strcmp(temp,"end")||i>=100) break;
		
		if(i) {
			if(arr[i-1][strlen(arr[i-1])-1] != temp[0]) {
				printf("#�Ұ����մϴ�#\n");
				continue;
			}
		}
		
		for(j=0;j<i;j++) {
			if(!strcmp(arr[i],arr[j])) {
				flag =1;
				break;
			}
		}
		if(flag==1) {
			printf("#�̹� �����մϴ�#\n");
			continue;
		}
		
		i++;
	}
	
	for(j=0;j<i;j++) {
		printf("%s ",arr[j]);
	}
	return 0;
}
