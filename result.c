#include"robot.h"

void GetResult(int type) {
	int i,j;
    total = 0;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			if (map[i][j] == '1') {
				++total;
                if(type == 1){
                    Search(i, j);
                }
                else if (type == 2){
                    LeaningSearch(i,j);
                }
                else if(type == 3){
                    CompleteSearch(i,j);
                }

			}
		}
	}
}