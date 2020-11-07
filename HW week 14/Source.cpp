#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int sum(int x1, int x2)
{
	return x1 + x2;
}
int main()
{
	int l, n, j1, j2, answer;
	printf("Teacher Questions:");
	scanf("%d %d", &j1, &j2);
	printf("Sum of %d and %d = ?\n", j1, j2);
	answer = sum(j1, j2);
	struct info
	{
		int id;
		char nickName[50];
		int year;
		int ans;
	};

	struct info student[50];
	printf("Number of students:");
	scanf_s("%d", &l);
	for (int i = 0; i < l; i++)
	{
		scanf("%d ", &student[i].id);
		scanf("%s ", student[i].nickName);
		scanf("%d ", &student[i].year);
		scanf("%d", &student[i].ans);
	}
	printf("Student:\n");
	for (int i = 0; i < l; i++)
	{
		if (student[i].year == 1)
		{
			if (student[i].ans == answer)
			{

				printf("%d ", student[i].id);
				printf("%s ", student[i].nickName);
				printf(" is correct");
			}
		}

		printf("\n");
	}
	return 0;
}
