#include "stdafx.h"
#include <time.h>
#define N 10

struct Point
{
	int x;
	int y;
}D[N], new_coords;

int main(void)
{
	/*
	//most left point
	int new_x = 10; 
	int new_y; 
	int wanted_num;

	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		D[i].x = rand() % 10;
		D[i].y = rand() % 10;
		if (new_x > D[i].x) 
		{
			new_x = D[i].x;
			new_y = D[i].y;
			wanted_num = i;
		}

		printf("%d. x=%d,y=%d\n", i + 1, D[i].x, D[i].y);
	}
	printf("LEVAYA: %d. x=%d,y=%d\n", wanted_num + 1, new_x, new_y);
	*/

	/*
	//most up point
	int new_x;
	int new_y = 0;
	int wanted_num;
	srand(time(0));
	for (int i = 0; i < N; i++) 
	{
		D[i].x = rand() % 10;
		D[i].y = rand() % 10;
		if (new_y < D[i].y) 
		{
			new_y = D[i].y;
			new_x = D[i].x;
			wanted_num = i;
		}

		printf("%d. x=%d,y=%d\n", i, D[i].x, D[i].y);
	}
	printf("VERX: %d. x=%d,y=%d\n", wanted_num, new_x, new_y);
	*/

	/*
	//furthest from start point
	int n = 0; 
	int wanted_num; 
	srand(time(0));

	for (int i = 0; i < N; i++) 
	{
		D[i].x = rand() % 10;
		D[i].y = rand() % 10;
		int piphagor_theorem = D[i].x * D[i].x + D[i].y * D[i].y;
		if (n < piphagor_theorem)
		{
			n = piphagor_theorem;
			new_coords = D[i];
			wanted_num = i;
		}

		printf("%d. x = %d, y = %d, distance from (0;0) = %d\n", i + 1, D[i].x, D[i].y, piphagor_theorem);
	}
	printf("DAL: %d. x = %d,y = %d\n", wanted_num + 1, new_coords.x, new_coords.y);
	*/

	/* //idk what's this, stole it from other group's project
	srand(time(0));
	for (int i = 0; i < N; i++) 
	{
		D[i].x = rand() % 10;
		D[i].y = rand() % 10;
		/*if (n < D[i].x*D[i].x + D[i].y*D[i].y) 
		{
			n = D[i].x*D[i].x + D[i].y*D[i].y;
			new_coords = D[i];
			j = i;
		}

		printf("%d. x=%d,y=%d\n", i + 1, D[i].x, D[i].y);
	}
	for (int i = 0; i < N;i++) 
	{
		for (int j = 0; j < i; j++) 
		{
			if ((D[i].x - D[j].x)*(D[i].x - D[j].x) + (D[i].y - D[j].y)*(D[i].y - D[j].y) > n)
			{
				n = (D[i].x - D[j].x)*(D[i].x - D[j].x) + (D[i].y - D[j].y)*(D[i].y - D[j].y);
				first_coords = D[i];
				second_coords = D[j];
				first_wanted_num = i + 1;
				second_wanted_num = j + 1;
			 }
		}
	}
	printf("1: %d. x=%d,y=%d\n", res, K1.x, K1.y);
	printf("2: %d. x=%d,y=%d\n", res1, K2.x, K2.y);
	*/
    return 0;
}

