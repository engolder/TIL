#include<stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

int swap(Point *pos1, Point *pos2) {
	Point temp;
	
	temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;
}

int main(void) {
	Point pos1 = {2,4};
	Point pos2 = {5,7};
	
	swap(&pos1,&pos2);
	
	printf("pos1={%d,%d}\n",pos1.xpos,pos1.ypos);
	printf("pos2={%d,%d}\n",pos2.xpos,pos2.ypos);
}
