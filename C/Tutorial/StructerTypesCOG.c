#include<stdio.h>

struct position {
	float x;
	float y;
};

struct position center(struct position pos1,struct position pos2,struct position pos3) {
	
	struct position cog;
	
	cog.x = (pos1.x + pos2.x + pos3.x)/3.0;
	cog.y = (pos1.y + pos2.y + pos3.y)/3.0;	
	
	return cog;
}

int main(void) {
	
	struct position a,b,c,cog;
	
	scanf("%f %f",&a.x,&a.y);
	scanf("%f %f",&b.x,&b.y);
	scanf("%f %f",&c.x,&c.y);
	
	cog = center(a,b,c);
	
	printf("%.1f %.1f",cog.x,cog.y);
}
