#include <stdio.h>

#define ROWS 8
#define COLS 8

// 판 초기화


void init_board(int board[ROWS][COLS]){
	//모든 위치에서 0으로 채우기
	// 0 = 요소가 없다.

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = 0;
		}
	}



}
// 2. 판 설정


void setup_board(int board[ROWS][COLS]) {
	// 1 = 빨간 피스, 2 = 검은 피스
	//빨간은 항상 위에, 검은 항상 밑에

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < COLS; j++) {
			if ((i + j) % 2 == 1) {
				board[i][j] = 1;
			}
		}
	}

	for (int i = ROWS - 2; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if ((i + j) % 2 == 1) {
				board[i][j] = 2;
			}
		}
	}

}
//판 출력
void print_board(int board[ROWS][COLS]) {


	printf("\n");

	for (int j = 0; j < COLS; j++) {
		printf("%d", j);

	}
	printf("\n");


	printf("  ");

	//윗 테두리
	for (int j = 0; j < COLS; j++) {
		printf("--");

	}
	printf("\n");

	//판 출력
	for (int i = 0; i < ROWS; i++) {
		printf("%d|", i); //행 숫자 출력
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] == 0) {
				printf(". "); //빈 공간

			}
			else if (board[i][j] == 1) {
				printf("o ");
			}

			else if (board[i][j] == 2) {
				printf("x ");
			}
		}
		printf("|\n");
	}
	


	// 밑 테두리
	for (int j = 0; j < COLS; j++) {
		printf("--");

	}
	printf("\n");


}

int main(void) {


	int board[ROWS][COLS];

	init_board(board);
	setup_board(board);
	print_board(board);

	return 0;
}