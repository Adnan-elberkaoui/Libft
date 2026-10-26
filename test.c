#include <stdio.h>

typedef struct {
	char name[100];
	int age;
	int grade;

}student;

int main (void)
{
	student sde2 = "adnan";
	student std1 = {"adnan" , 50 , 2};
	printf("%s\n" , std1.name);
	printf("%d\n" , std1.age);
	printf("%d\n" , std1.grade);
}
