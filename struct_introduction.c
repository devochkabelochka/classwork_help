#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10

struct Point
{
	int x;
	int y;
}D[N], new_coords, first_coords, second_coords, tmp;

//comment out unnecessary parts of the code to make it work

int main(void)
{
	//picking most left point
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

		printf("%d. x = %d, y = %d\n", i + 1, D[i].x, D[i].y);
	}

	printf("LEFT: %d. x = %d, y = %d\n", wanted_num + 1, new_x, new_y);



	//picking most upper point
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

		printf("%d. x = %d, y = %d\n", i + 1, D[i].x, D[i].y);
	}

	printf("UPPER: %d. x = %d, y = %d\n", wanted_num, new_x, new_y);



	//picking furthest from (0, 0) point
	int n = 0; 
	int wanted_num; 
	srand(time(0));

	for (int i = 0; i < N; i++) 
	{
		D[i].x = rand() % 10;
		D[i].y = rand() % 10;
		int pifagor = sqrt(pow(D[i].x, 2) + pow(D[i].y, 2)); //sqrt and pow are from math.h library
		if (n < pifagor)
		{
			n = pifagor;
			new_coords = D[i];
			wanted_num = i;
		}

		printf("%d. x = %d, y = %d, distance from (0, 0) = %d\n", i + 1, D[i].x, D[i].y, pifagor);
	}

	printf("FURTHEST: %d. x = %d, y = %d\n", wanted_num + 1, new_coords.x, new_coords.y);
	

	//picking points with a biggest distance between them
	    float max_point_dist = 0;
	    int first_wanted_num;
	    int second_wanted_num;
	    int i, j;
		srand(time(0));


		for (i = 0; i < N; i++) 
		{
		D[i].x = rand() % 10;
			D[i].y = rand() % 10;
		    for (j = 0; j < i; j++) 
			{ 
		    float point_dist = sqrt(pow(D[j].x - D[i].x, 2) + pow(D[j].y - D[i].y, 2)); //√((x2-  x1)^2 + (y2 - y1)^2)
				if (point_dist > max_point_dist) 
				{
					max_point_dist = point_dist;
					first_coords = D[i];
					second_coords = D[j];
					first_wanted_num = i + 1;
					second_wanted_num = j + 1;
				 }
			}
		printf("%d. x = %d, y = %d\n", i + 1, D[i].x, D[i].y);
		}

	    printf("\nPoints with a biggest distance(%f) between them:\n", max_point_dist);
		printf("1: %d. x = %d, y = %d\n", second_wanted_num, second_coords.x, second_coords.y);
		printf("2: %d. x = %d, y = %d\n", first_wanted_num, first_coords.x, first_coords.y);


	    //sorting by ascending x, y coordinates and distance from (0, 0)
	    int max_x = 0;
	    int max_y = 0;
	    int max_dist = 0;
	    int wanted_num;
	    srand(time(0));

	    for (int i = 0; i < N; i++) 
		{
			D[i].x = rand() % 10;
			D[i].y = rand() % 10;
		printf("%d. x = %d, y = %d\n", i + 1, D[i].x, D[i].y);
		}

	    //sorting by ascending x
	    for (int i = 0; i < N - 1; i++)
	    {
		for(int j = 0; j < N - i - 1; j++)
		{
		    if (D[j].x > D[j + 1].x)
		    {
			tmp = D[j];
			D[j] = D[j + 1];
			D[j + 1] = tmp;
		    }
		}
	    }

	    printf("\n");

	    for (int i = 0; i < N; i++)
	    {
		printf("%d. x = %d, y = %d\n", i + 1, D[i].x, D[i].y);
	    }

	    printf("\n");

	    //sorting by ascending y
	    for (int i = 0; i < N - 1; i++)
	    {
		for(int j = 0; j < N - i - 1; j++)
		{
		    if (D[j].y > D[j + 1].y)
		    {
			tmp = D[j];
			D[j] = D[j + 1];
			D[j + 1] = tmp;
		    }
		}
	    }

	    for (int i = 0; i < N; i++)
	    {
		printf("%d. x = %d, y = %d\n", i + 1, D[i].x, D[i].y);
	    }

	    printf("\n");

	    //sorting by ascending distance
	    int i, j;
	    for (i = 0; i < N - 1; i++)
	    {
		for (j = 0; j < N - i - 1; j++)
		{
		    if (pow(D[j].x, 2) + pow(D[j].y, 2) > pow(D[j + 1].x, 2) + pow(D[j + 1].y, 2))
		    {
			tmp = D[j];
			D[j] = D[j + 1];
			D[j + 1] = tmp;
		    }
		}
	    }

	    for (int i = 0; i < N; i++)
	    {
		printf("%d. x = %d, y = %d, distance from (0, 0) = %g\n", i + 1, D[i].x, D[i].y, pow(D[i].x, 2) + pow(D[i].y, 2));
	    }

	    return 0;
}
