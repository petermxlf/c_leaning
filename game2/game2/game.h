#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 11
#define COLS 11
#define EASY_COUNT 10
#define ROW 9
#define COL 9

void MinesWeeping(char board[ROWS][COLS], int rows, int cols,char set);

void PrintBoard(char board[ROWS][COLS], int row, int col);

void Lay_a_Mine(char board[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS],char show [ROWS][COLS], int row, int col);