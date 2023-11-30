#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void scanFile(FILE* fp,char d[8][9], int row, int col) {
	int r = 0;
	while (fscanf(fp, "%s", d[r]) != EOF) {
		r++;
	}
}

void makeF(char d[8][9],int row,int col) {
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			if (d[r][c] == '1') {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void revolution(char d[8][9], int row, int col) {
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			if (d[r][c] == '1') {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main() {
	const int col = 8;
	const int row = 8;

	FILE* fp = fopen("data.txt", "r");
	char data[row][col + 1] = {};

	scanFile(fp,data,row,col);

	fclose(fp);

	makeF(data, row, col);

	revolution(data, row, col);

	return 0;
}