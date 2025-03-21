#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	float computer_move = rand() % 3;
	printf("%d", RAND_MAX);
	printf("\n%d", computer_move);

	return 0;
}