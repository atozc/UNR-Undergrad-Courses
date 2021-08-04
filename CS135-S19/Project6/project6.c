// Name: tictactoe.c
// Purpose: A Tic-Tac-Toe where you can play against the computer
// Date Last Modified: 3/26/19
// Author: Crystal Atoz

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 3

// Function prototypes
void display_table(char board[SIZE][SIZE]);

void clear_table(char board[SIZE][SIZE]);

bool check_table_full(char board[SIZE][SIZE]);

void update_table(char board[SIZE][SIZE], int row, int col, char player);

bool check_legal_option(char board[SIZE][SIZE], int row, int col);

void generate_player2_move(char board[SIZE][SIZE], int row, int col);

bool check_three_in_a_row(char board[SIZE][SIZE]);

bool check_end_of_game(char board[SIZE][SIZE]);

void get_player1_move(char board[SIZE][SIZE], int row, int col);

void print_winner(char board[SIZE][SIZE]);

// Main Function
int main(void)
{
  // Delcare the tic-tac-toe board
  char board[SIZE][SIZE];

  // The row and column of the move for either player 1 or 2
  int row, col;

  // Clear the table
  display_table(board);

  do {
    // Have player 1 enter their move
    get_player1_move(board, row, col);

    // Generate player 2 move
    generate_player2_move(board, row, col);

// Do this while the game hasn't ended
} while(check_end_of_game(board) == false);

// After the game is over, print who won
print_winner(board);

return 0;
}

// Function Definitions

// Displays the board
void display_table(char board[SIZE][SIZE])
{
  int i, j;
  printf("The current state of the game is: \n");
  for(i = 0; i < SIZE; i++) {
    for(j = 0; j < SIZE; j++) {
      printf("%c", board[i][j]);
    }
  }
  printf("\n");
}

// Clears the board
void clear_table(char board[SIZE][SIZE])
{
  int i, j;
  for(i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      board[i][j] = '_';
    }
  }
}

// Checks if the board is full or not full
bool check_table_full(char board[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (board[i][j] == '_')
        return false; // Finds an empty square
    }
  }
  return true; // Finds no empty squares
}

// Updates the board
void update_table(char board[SIZE][SIZE], int row, int col, char player)
{
  board[row][col] = player;
}

// Checks if the move is legal
bool check_legal_option(char board[SIZE][SIZE], int row, int col)
{
  if (board[row][col] == '_' && row < SIZE && col >= 0 && col < SIZE) {
    return true;
  }else{
    return false;
  }
}

// Generates player 2's move
void generate_player2_move(char board[SIZE][SIZE], int row, int col)
{
  if (check_end_of_game(board)) {
    do{
      row = rand()% SIZE;
      col = rand()% SIZE;
    }while (check_legal_option(board, row, col));
    update_table(board, row, col, 'X');
    printf("Player 2 has entered [row, col]: %d, %d", row + 1, col + 1);
    display_table(board);
  }
}

// Checks if there are three tokens in a row
bool check_three_in_a_row(char board[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; i++) {
    // Checks row
    if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2])) {
      if (board[i][0] == 'X')
        return 2;
      else if (board[i][0] == 'O')
        return 1;
    }
    // Checks in column
    if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i])) {
      if(board[0][i] == 'X')
      return 2;
    else if (board[0][i] == 'O')
      return 1;
    }
  }
  return 0;
}

// Checks if the game is over or not
bool check_end_of_game(char board[SIZE][SIZE])
{
  return check_three_in_a_row(board) || check_table_full(board);
}

// Gets player 1's move
void get_player1_move(char board[SIZE][SIZE], int row, int col)
{
  if (check_end_of_game(board)) {
    do {
      printf("Player 1 enter your selection [row, col]: ");
      scanf("%d, %d", & row, & col);
    }while (check_legal_option(board, row - 1, col - 1));
    update_table(board, row - 1, col - 1, 'O');
    display_table(board);
  }
}

// Prints the winner of the game
void print_winner(char board[SIZE][SIZE])
{
  int winner = check_three_in_a_row(board);
  if(winner = 1) {
    printf("Congratulations, Player 1 wins!\n");
  }
  else if (winner == 2){
    printf("Congratulations, Player 2 wins!\n");
  }else{
    printf("Game over, no player wins.\n");
  }
}
