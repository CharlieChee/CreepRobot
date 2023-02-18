#include"robot.h"

void GetMap() {
	int i,j;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf("%c", &map[i][j]);
		}
		getchar();
	}
}

void ReadFile(char* name){
	FILE *fp;
	char str[size];
	if( (fp=fopen(name,"rt")) == NULL ){
        puts("Fail to open file!");
        return;
    }
   n=atoi(fgets(str, size, fp));
   m = atoi((fgets(str, size, fp)));
	int i = 0, j = 0;
	while(fgets(str, size, fp) != NULL){
        for (j = 0; j < m; ++j) {
			map[i][j] = str[j];
		}
		i++;
    }

    fclose(fp);
	return;
}