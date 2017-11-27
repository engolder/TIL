#include<stdio.h>

struct point {
	double x, y;
};

struct point input(struct point p) {
	printf("점의 좌표는?");
	scanf("%lf %lf",&p.x,&p.y);
	return p;
}

struct point center(struct point a, struct point b) {
	struct point c;
	c.x=(a.x + b.x ) / 2;
	c.y=(a.y + b.y ) / 2;
	return c;
}

void output(struct point p) {
	printf("중심점 : %.lf, %.lf",p.x,p.y);
}

void main(void) {
	struct point p1,p2,p3,a,b;
	a=input(p1);
	b=input(p2);
	p3 = center(a,b);
	output(p3);
}
