#include<stdio.h>

int main(void) {
	int x;
	int sum=0;
	int shortStick=64;
	int cnt=1;
	
	scanf("%d", &x);
	
	while (sum + shortStick > x) {
		if (sum + shortStick > x) {
			shortStick /= 2;
			if(!sum + shortStick >= x) {
				cnt++;
				sum+=shortStick;
			}
		}
	}
	
	printf("%d", cnt);
}
