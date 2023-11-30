#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	const int col = 8;
	const int row = 8;

	FILE* fp = fopen("data.txt", "r");

	char data[row][col + 1] = {};
	int r = 0;
	while (fscanf(fp, "%s", data[r]) != EOF) {
		r++;
	}

	fclose(fp);
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			if (data[r][c] == '1') {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}