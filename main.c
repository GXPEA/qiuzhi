#include <stdio.h>

int main()
{
	struct student
	{
		long number;
		char name[100];
		int score;
	} Student1;
	printf("��������ѧ��ѧ�š����������֣�");
	scanf("%ld %d", &Student1.number, &Student1.score);
	getchar(); 
	fgets(Student1.name, 100, stdin);
	printf("%ld\n%s\n%d", Student1.number, Student1.name, Student1.score);
	
	return 0;
}
