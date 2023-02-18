#include <stdio.h>
#include"robot.h"

int main()
{
	// GetMap();
	ReadFile("./input.txt");
	GetResult(1);
	printf("The total area of Basic Search is : %d\n", total);
	
	ReadFile("./input.txt");
	GetResult(2);
	printf("The total area of Diagobal Search is : %d\n", total);

	ReadFile("./input.txt");
	GetResult(3);
	printf("The total area of Complete Search is : %d\n", total);
	return 0;
}

