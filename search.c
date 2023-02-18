#include"robot.h"


void Search(int x, int y) {
	if (x < 0 || x >= n || y < 0 || y >= m || map[x][y] == '0') {
		return;
	}
	map[x][y] = '0';
	Search(x - 1, y);
	Search(x, y - 1);
	Search(x, y + 1);
	Search(x + 1, y);
}







