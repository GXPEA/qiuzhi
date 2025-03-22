#include <stdio.h>

int main()
{
	struct student
	{
		long number;
		char name[100];
		int score;
	} Student1;
	printf("依次输入学生学号、分数、名字：");
	scanf("%ld %d", &Student1.number, &Student1.score);
	getchar(); 
	fgets(Student1.name, 100, stdin);
	printf("%ld\n%s\n%d", Student1.number, Student1.name, Student1.score);
	
	return 0;
}
