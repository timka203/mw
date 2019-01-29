#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void task6()
{
	int a[12][12] = { 0 };
	int c = 0;
	int t = 0;
	int r, y;
	c = 1 + rand() % 50;
	t=50 + rand() % 50;
	
	y = t-c;
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 12; j++)
		{
			a[i][j]= c + rand() % y;
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		printf("\n");;
		for (size_t j = 0; j < 12; j++)
		{
			printf("%d   ", a[i][j]);
		}
	}
	printf("%d %d  \n", c, t);



}
void task5()
{
	int a[12][12] = { 0 };
	int count = 0;
	int count1 = 0;
	for (size_t i = 0; i < 12; i++)
	{

		for (size_t j = 0; j < 12; j++)
		{
		
				a[i][j] = 0 + rand() % 2;


			if (count < count1 * 3)
				a[i][j] = 0;

			if (a[i][j] == 0)
				count++;

			if (a[i][j] == 1)
				count1++;

		}
	
	}
	for (size_t i = 0; i < 12; i++)
	{
		printf("\n");;
		for (size_t j = 0; j < 12; j++)
		{
			printf("%d   ", a[i][j]);
		}
	}
	printf("%d  %d\n", count, count1);


}
void task4()
{
	int a[8][8] = { 0 };
	int count = 0;
	int count1 = 0;
	for (size_t i = 0; i < 8; i++)
	{
		
		for (size_t j = 0; j < 8; j++)
		{
			if (count == count1 * 2)
				a[i][j] = 0 + rand() % 2;

			if (count > count1 * 2)
				a[i][j] = 1;

			if (count <count1 * 2)
				a[i][j] = 0;

			if (a[i][j] ==0)
				count++;

			if (a[i][j] == 1)
				count1++;

		}
	}
	for (size_t i = 0; i < 8; i++)
	{
		printf("\n");;
		for (size_t j = 0; j < 8; j++)
		{
			printf("%d   ", a[i][j]);
		}
	}


}
void task3()
{
	int a[10][10] = { {0} };
	int count = 0;
	int count1 = 0;
	int four = 0;
	int five = 0;
	float y, u;
	int r[10] = { 0 };
	int e;
	for (size_t i = 0; i < 10; i++)
	{
		printf("\n");
		for (size_t j = 0; j < 10; j++)
		{
			a[i][j] = 6 + rand() % 11;
			printf("%d   ", a[i][j]);

		}
	}
	printf("\n=========================\n");
	for (size_t i = 0; i < 10; i++)
	{
		count = 0;
		count1 = 0;
		for (size_t j = 0; j < 10; j++)
		{
			if (a[i][j] >= 7)
				count++;
			if (a[i][j] >= 10)
				count1++;
			if (count >= 10)
				four++;
			if (count1 >= 10)
				five++;
			if (count >= 10)
				r[i] = i;
		}
	}
	printf("\n%d  \n-%d-", four, five);
	y = (four % 10) * 10;
	u = float(five % 10) * 10;
	if (four >= 10)
		y = 100;
	y = y - u;
	printf("\n%f  \n-%f-", y, u);
	for (size_t i = 0; i < 10; i++)
	{
		printf("\n");
		for (size_t j = 0; j < 10; j++)
		{
			if (r[i]!=0)
			printf("%d   ", a[r[i]][j]);
			

		}
	}
	printf(" ввидите число\n");
	scanf_s("%d", &e);
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n",a[i][e]);

	}
}
void task2()
{
	int a[10][10] = { {0} };

	for (size_t i = 0; i < 10; i++)
	{
		printf("\n");
		for (size_t j = 0; j < 10; j++)
		{
			a[i][j] = 1 + rand() % 11;
			printf("%d      ", a[i][j]);

		}
	}
	printf("\n=========================\n");
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0;j < 10; j++)
		{
			if (a[i][j] < 4)
				printf("не сдал (%d)  ",j+1);
			else printf("сдал(%d)  ",j+1);
		}
		printf("\n-----------------------\n");
	
}



}
void task1()
{
	int a[10][10] = { {0} };
	int count = 0;
	int count1 = 0;
	for (size_t i = 0; i< 9; i++)
	{
		count = 0;
		count1 = 0;
		printf("\n");
		for (size_t j = 0; j < 9; j++)
		{
			a[i][j] = 1 + rand() % 11;
			printf("%d      ", a[i][j]);
			if (a[i][j] < 6)
				count++;
			else count1++;
			
		}
		printf("\n-%d не сдал-    -%d сдал-\n", count, count1);
	}



}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}