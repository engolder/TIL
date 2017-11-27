#include<stdio.h>

//struct student{
//	char name[20];
//	char schoolName[20];
//};
//
//int main(void) {
//	struct student me;
//	struct student fri;
//	
//	scanf("%s %s",me.name,me.schoolName);
//	printf("%s %s",me.name,me.schoolName);
//	scanf("%s %s",fri.name,fri.schoolName);
//	printf("%s %s",fri.name,fri.schoolName);
//}

//struct student{
//	char name[20];
//	char schoolName[20];
//	int grade;
//};
//
//int main(void) {
//	struct student me;
//	
//	scanf("%s %s %d",me.name,me.schoolName,&me.grade);
//	printf("%s %s %d",me.name,me.schoolName,me.grade);
//}

struct student{
	char name[20];
	int gradeEng;
	int gradeMath;
};

int main(void) {
	struct student stu1;
	struct student stu2;
	
	scanf("%s %d %d",stu1.name,&stu1.gradeEng,&stu1.gradeMath);
	scanf("%s %d %d",stu2.name,&stu2.gradeEng,&stu2.gradeMath);
	
	printf("%s : %d\n",stu1.name,(stu1.gradeEng+stu1.gradeMath) /2);
	printf("%s : %d\n",stu2.name,(stu2.gradeEng+stu2.gradeMath) /2);
	
}
