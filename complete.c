#include"robot.h"

void CompleteSearch(int x, int y) {
	if (x < 0 || x >= n || y < 0 || y >= m || map[x][y] == '0') {
		return;
	}
	map[x][y] = '0';
    CompleteSearch(x - 1, y);
	CompleteSearch(x, y - 1);
	CompleteSearch(x, y + 1);
	CompleteSearch(x + 1, y);
    CompleteSearch(x - 1, y - 1);
	CompleteSearch(x - 1, y + 1);
	CompleteSearch(x + 1, y - 1);
	CompleteSearch(x + 1, y + 1);
}