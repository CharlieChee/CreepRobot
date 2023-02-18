#include<stdio.h>
#include<stdlib.h>
#define size 1000
char map[size][size];
char fileName[100] ;

int n, m;
int total;
void GetMap();
void Search(int x, int y);
void GetResult(int type);
void LeaningSearch(int x, int y);
void ReadFile(char* name);
void CompleteSearch(int x ,int y);
