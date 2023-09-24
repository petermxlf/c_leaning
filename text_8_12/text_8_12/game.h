#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
//声明棋盘
void InitBoard(char board[ROW][COL],int row,int col);
//声明打印棋盘
void DisPlayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComeputerMove(char board[ROW][COL], int row, int col);
//判断输赢
//玩家赢了-- *
//电脑赢了-- #
//平局    -- Q
//继续    -- C
char IsWin(char board[ROW][COL],int row,int col);
