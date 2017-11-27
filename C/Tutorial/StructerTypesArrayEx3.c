#include<stdio.h>

struct position{
	int x;
	int y;
};

int computeArea(struct position pos[]) {
	int lengthX;
	int lengthY;
	int area;
	
	lengthX = pos[0].x - pos[1].x;
	lengthY = pos[0].y - pos[1].y;
	area = lengthX * lengthY;
}

void input(struct position pos[]) {
	int i;
	
	for(i=0;i<2;i++) {
		printf("ÁÂÇ¥%d : ",i+1);
		scanf("%d %d",&pos[i].x,&pos[i].y);
	}
		
}

void output(struct position pos[]) {
	int i=0;
	
	printf("³ÐÀÌ : %d\n",computeArea(pos));
	printf("³× Á¡ÀÇ ÁÂÇ¥ :");
	while(1) {
		printf("(%d,%d)",pos[i].x,pos[i].y);
		if(i==3) break;
		printf(",");
		i++;
	}
}

int main(void) {
	struct position pos[4];
	
	input(pos);
	
	pos[2].x = pos[0].x;
	pos[2].y = pos[1].y;
	
	pos[3].x = pos[1].x;
	pos[3].y = pos[0].y;
	
	output(pos);
	
}
