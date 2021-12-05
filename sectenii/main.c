#include <stdio.h>

int main()
{

  
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    
    char player1 = 'X';
    char player2 = 'O';
    while(1)
    {
        
        
      
        printf("Player 1 turn\n");
        
        char player1_input;
        player1_input = getchar();
        getchar();
       
       
        if (player1_input == '1') {
            board[0][0] = player1;
        } else if (player1_input == '2') {
            board[0][1] = player1;
        } else if (player1_input == '3') {
            board[0][2] = player1;
        } else if (player1_input == '4') {
            board[1][0] = player1;
        } else if (player1_input == '5') {
            board[1][1] = player1;
        } else if (player1_input == '6') {
            board[1][2] = player1;
        } else if (player1_input == '7') {
            board[2][0] = player1;
        } else if (player1_input == '8') {
            board[2][1] = player1;
        } else if (player1_input == '9') {
            board[2][2] = player1;
        }
        //print board after player 1 pick
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
            if (board[0][0] == player1 && board[0][1] == player1 && board[0][2] == player1) {
                  printf("Player 1 win\n");
                  return 0;
            
              } else if (board[1][0] == player1 && board[1][1] == player1 && board[1][2] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              } else if (board[2][0] == player1 && board[2][1] == player1 && board[2][2] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              } else if (board[0][0] == player1 && board[1][0] == player1 && board[2][0] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              } else if (board[0][1] == player1 && board[1][1] == player1 && board[2][1] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              } else if (board[0][2] == player1 && board[1][2] == player1 && board[2][2] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              } else if (board[0][0] == player1 && board[1][1] == player1 && board[2][2] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              } else if (board[0][2] == player1 && board[1][1] == player1 && board[2][0] == player1) {
                  printf("Player 1 win\n");
                  return 0;
              }
      
     
        if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9') {
            printf("Tie\n");
            return 0;
        }
       
       
      
    
        printf("Player 2 turn\n");
        
        char player2_input;
        player2_input = getchar();
        getchar();
        
        
 
        if (player2_input == '1') {
            board[0][0] = player2;
        } else if (player2_input == '2') {
            board[0][1] = player2;
        } else if (player2_input == '3') {
            board[0][2] = player2;
        } else if (player2_input == '4') {
            board[1][0] = player2;
        } else if (player2_input == '5') {
            board[1][1] = player2;
        } else if (player2_input == '6') {
            board[1][2] = player2;
        } else if (player2_input == '7') {
            board[2][0] = player2;
        } else if (player2_input == '8') {
            board[2][1] = player2;
        } else if (player2_input == '9') {
            board[2][2] = player2;
        }
        
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
        
        if (board[0][0] == player2 && board[0][1] == player2 && board[0][2] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[1][0] == player2 && board[1][1] == player2 && board[1][2] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[2][0] == player2 && board[2][1] == player2 && board[2][2] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[0][0] == player2 && board[1][0] == player2 && board[2][0] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[0][1] == player2 && board[1][1] == player2 && board[2][1] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[0][2] == player2 && board[1][2] == player2 && board[2][2] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[0][0] == player2 && board[1][1] == player2 && board[2][2] == player2) {
            printf("Player 2 win\n");
            return 0;
        } else if (board[0][2] == player2 && board[1][1] == player2 && board[2][0] == player2) {
            printf("Player 2 win\n");
            return 0;
        }
        if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9') {
            printf("Tie\n");
            return 0;
        }
           
       
     
       
    }
}

       
     
    




    
