#include"robot.h"
#include<stdio.h>
void LeaningSearch(int x, int y){
	if (x < 0 || x >= n || y < 0 || y >= m || map[x][y] == '0') {
		return;
	}
	map[x][y] = '0';
	
	LeaningSearch(x - 1, y - 1);
	LeaningSearch(x - 1, y + 1);
	LeaningSearch(x + 1, y - 1);
	LeaningSearch(x + 1, y + 1);
} 