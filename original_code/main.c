#include "minimax.h"
#include "board.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    Código livremente inspirado naquele apresentado em 
    https://www.geeksforgeeks.org/finding-optimal-move-in-tic-tac-toe-using-minimax-algorithm-in-game-theory/
*/

int main() 
{ 
	char board[3][3] = 
	{ 
		{ 'x', 'o', '_' }, 
		{ '_', '_', '_' }, 
		{ '_', '_', '_' } 
	}; 

    printBoard(board);

    int k = 0;
    while(utility(board)==0 && isMovesLeft(board)){
        if (k%2==0){
            move bestMove = findBestMove(board);
            play(board,bestMove,'o');
        }
        else{
            move bestMove = findBestMove(board);
            play(board,bestMove,'x');
        }
        printBoard(board);
        k++;
    }

	return 0; 
}