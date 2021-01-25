

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define EASY_COUNT 10


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
// mine - 存放雷的信息
// row 
// col
// count - 布置的雷的个数
//
void SetMine(char mine[ROWS][COLS], int row, int col, int count);


//排雷
void FineMine(char mine[ROWS][COLS], 
	          char show[ROWS][COLS], 
			  int row, 
			  int col);
