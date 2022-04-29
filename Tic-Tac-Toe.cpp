/*
* Ibrahim Khan
* CS 3060-001
* Programming Challenge 70004: Tic-Tac-Toe
* 03/30/2021
* This program allows two players to play tic-tac-toe via a char 2D array. Each element in the 
* array is first initialized with an asterisk and players take turns replacing the asterisks 
* with an X or O. The program will keep track of whose turn it is. On each turn, the program asks
* the player to enter the row and column number and the array will be updated. The program ends
* when a player wins or the board is filled up.
*/

#include <iostream>
using namespace std;

int main () {
	
	//Declaring and initializing variables
	const int ROWS = 3;
	const char P1 = 'X';
	const char P2 = 'O';
	int winner, turn, row, column;
	char board[ROWS][ROWS] = {'*','*','*','*','*','*','*','*','*'};
	
	bool boardFull = false; //Used to tell program if board is filled or not
	winner = 0; //Determines winner or tie
	turn = 1; //Used to tell whose turn it is
	
	//Loop runs until board is full or a player has won
	while (boardFull == false && winner == 0) {
		
		//Display board
		cout << board[0][0] << board[0][1] << board[0][2] << endl;
		cout << board[1][0] << board[1][1] << board[1][2] << endl;
		cout << board[2][0] << board[2][1] << board[2][2] << endl;
		
		//If statement determines whose turn it is, then asks for user input
		if (turn%2 == 1) {
			cout << "Enter player X, row and column: ";
			cin >> row >> column;
		}
		else {
			cout << "Enter player O, row and column: ";
			cin >> row >> column;
		}
		
		//Decrementing to align with index values
		row--;
		column--;
		
		//If an invalid row or column number was entered
		if (row < 0 || row > 2 || column < 0 || column > 2) {
			cout << "Invalid input! Please try again\n";
			continue;
		}
		
		//If player chose a spot that is not empty
		if (board[row][column] != '*') {
			cout << "This spot is already taken! Please try again\n";
			continue;
		}
		
		//If player 1 just played
		if (turn%2 == 1) {
			
			board[row][column] = P1; //Update board
			
			//Check if player 1 has won
			if ((board[0][0] == P1 && board[0][1] == P1 && board[0][2] == P1) || 
				(board[1][0] == P1 && board[1][1] == P1 && board[1][2] == P1) ||
				(board[2][0] == P1 && board[2][1] == P1 && board[2][2] == P1) ||
				(board[0][0] == P1 && board[1][0] == P1 && board[2][0] == P1) ||
				(board[0][1] == P1 && board[1][1] == P1 && board[2][1] == P1) ||
				(board[0][2] == P1 && board[1][2] == P1 && board[2][2] == P1) ||
				(board[0][0] == P1 && board[1][1] == P1 && board[2][2] == P1) ||
				(board[0][2] == P1 && board[1][1] == P1 && board[2][0] == P1)) {
				
				winner = 1; //Will cause loop to end
			}
		}
		//If player 2 just played
		else {
			
			board[row][column] = P2; //Update board
			
			//Check if player 2 has won
			if ((board[0][0] == P2 && board[0][1] == P2 && board[0][2] == P2) || 
				(board[1][0] == P2 && board[1][1] == P2 && board[1][2] == P2) ||
				(board[2][0] == P2 && board[2][1] == P2 && board[2][2] == P2) ||
				(board[0][0] == P2 && board[1][0] == P2 && board[2][0] == P2) ||
				(board[0][1] == P2 && board[1][1] == P2 && board[2][1] == P2) ||
				(board[0][2] == P2 && board[1][2] == P2 && board[2][2] == P2) ||
				(board[0][0] == P2 && board[1][1] == P2 && board[2][2] == P2) ||
				(board[0][2] == P2 && board[1][1] == P2 && board[2][0] == P2)) {
				
				winner = 2; //Will cause loop to end
			}
		}
		
		//Assume that board is full and loop below will confirm or deny this
		boardFull = true;
		//Loop runs until an asterisk is found - board still has empty spots
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < ROWS; j++) {
				if (board[i][j] == '*') {
					boardFull = false;
					i = ROWS;
					j = ROWS;
				}
			}
		}
		
		turn++; //Switch player
	}
	
	//Display board
	cout << board[0][0] << board[0][1] << board[0][2] << endl;
	cout << board[1][0] << board[1][1] << board[1][2] << endl;
	cout << board[2][0] << board[2][1] << board[2][2] << endl;
	
	//If player 1 won
	if (winner == 1) {
		cout << "Player X wins!";
	}
	//If player 2 won
	else if (winner == 2) {
		cout << "Player O wins!";
	}
	//If there was no winner
	else {
		cout << "Tie - no winner";
	}
	
	return 0;
}

