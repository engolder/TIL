#include<stdio.h>

struct person{
	char name[20];
	int height;
	int weight;
};

void input(struct person stu[]) {
	int i;
	
	for(i=0;i<5;i++) {
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].height);
		scanf("%d",&stu[i].weight);
	}
}

void sort(struct person stu[]) {
	int i,j;
	struct person temp;
	
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			if(stu[j].height > stu[j+1].height) {
				temp = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = temp;
			}
		}
	}
}

void output(struct person stu[]) {
	int i;
	
	for(i=0;i<5;i++) {
		printf("%s ",stu[i].name);
		printf("%d ",stu[i].height);
		printf("%d\n",stu[i].weight);
	}
}
int main(void) {
	
	struct person stu[5];
	
	input(stu);
	sort(stu);
	output(stu);
}
