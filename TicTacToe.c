///////////// '0' is for player ;'X' is for AI
#include<math.h>
#include<stdio.h>

#define IQ 0 // how many steps in future (1-8) 

//GLobal Var
int GameBoard[3][3];
int _player_turn = -1;//   1  = ai and -1 = player
int _turn = 0;

//initialising board values
void initBoard()
{
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {
            GameBoard[i][j] = 0; //empty 
        }
    }
}

// move of player/ai at i , j spot  
int move(int board[3][3] ,int i, int j)
{
    // if empty , move
    if( board[i][j]== 0 && _turn <= 9)
    {   
        board[i][j] = _player_turn;
        _turn++;
        //switch player
        if(_player_turn == 1)
            _player_turn = -1;
        else
            _player_turn = 1;
        
    }
    else
    {
        return 1;//error
    }
    return 0;   
}

void drawBoard()
{   
    char board[3][3];

    for( int i = 0 ; i<3 ; i++)
    {
         for( int j = 0 ; j<3 ; j++)
         {
            if(GameBoard[i][j] == 0)
                board[i][j] = ' ';
            else if(GameBoard[i][j] == 1)
                board[i][j] = 'X';
            else 
                board[i][j] = 'O';
         }
    }

    printf("\n %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
    printf(" %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
    printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
    
}



// all 8 conditions of winning
int checkWin(int board[3][3])
{
    if(board[0][0]==board[0][1]&&board[0][0]==board[0][2])      //horizontal series
        return board[0][0];
    else if(board[1][0]==board[1][1]&&board[1][0]==board[1][2])
        return board[1][0];
    else if(board[2][0]==board[2][1]&&board[2][0]==board[2][2])
        return board[2][0];

    
    else if(board[1][0]==board[2][0]&&board[1][0]==board[0][0]) //vertical series
        return board[0][0];
    else if(board[1][1]==board[2][1]&&board[1][1]==board[0][1])
        return board[1][1];
    else if(board[1][2]==board[2][2]&&board[1][2]==board[0][2])
        return board[2][2];
    
    else if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]) //cross series
        return board[1][1];
    else if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
        return board[1][1];
    else return 0;
}
//player input
void input(int *i , int *j)
{   printf("Player: ");  // enter the index value of the matrix; eg 0 1, 2 1, 2 2
    scanf("%d %d", i , j);
}



//AI
//-----------------------------------------------------------------
void copy_board(int board[3][3],int copy[3][3])
{
    for(int a = 0 ; a < 3 ; a++)
    {
        for(int b = 0 ; b < 3 ; b++)
        {            
            copy[a][b] = board[a][b];
        }
    }
}






int minimax(int board[3][3], int depth, int Max )
{   
    if(checkWin(board)) //terminating condition
        return checkWin(board);
    if( _turn + depth == 8 )//terminating condition
        return 0;
    
    int tempBoard[3][3]; // to continue the chain
    int value ;
    
    if(Max)
    {   value = -1000;
        for(int a = 0 ; a < 3 ; a++)
        {
            for(int b = 0 ; b < 3 ; b++)
            {   
                if(board[a][b] == 0)
                {   
                    copy_board(board, tempBoard);
                    tempBoard[a][b] = 1;

                    // move ahead since its 

                   //return best value from the tree under and the position 
                        int temp = minimax(tempBoard, depth+1 , 0); 
                        value = fmax(value,temp); 
                    
                }
            }
        }
        return value;
    } 
    else //min
    {
        value = 1000;
        for(int a = 0 ; a < 3 ; a++)
        {
            for(int b = 0 ; b < 3 ; b++)
            {   
                if(board[a][b] == 0)
                {   
                    copy_board(board, tempBoard);
                    tempBoard[a][b] = -1;

                      
                       //return best value from the tree under and the position 
                        int temp = minimax(tempBoard, depth+1 ,1); 
                        value = fmin(value,temp);
                    
                }
            }
        }
        return value;

    }    
    
}

void think(int board[3][3],int *a,int *b)
{   int tempBoard[3][3];
    int value = -1000;
    for(int i = 0 ; i < 3 ;i ++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {  
            
            if( board[i][j] == 0 )
            { 
                copy_board(board,tempBoard);
                tempBoard[i][j] = 1;

                int temp = minimax(tempBoard,0,0);
                if( value < temp)
                {   value = temp;
                    
                    *a = i;
                    *b = j;
                }
           }
        }
    }
}


void Ai(int *i , int *j)
{   
    int ai_board[3][3];
    copy_board(GameBoard,ai_board);
    think(ai_board, i , j);
    printf("AI: %d %d \n\n",*i, *j);
}




//-----------------------------------------------------------------

void Game()
{   int Win = 0 ;
    initBoard();
    int i , j;
    while(!Win&& (_turn<9))
    {
        
        if(_turn % 2 == 0)
            {
            drawBoard();
            input(&i,&j);
            }
        else
            Ai(&i,&j);
        move(GameBoard , i , j );
        Win = checkWin(GameBoard);
    }
    drawBoard();
    if(Win == -1)
        printf("You won!");
    else if( Win == 1)
        printf("AI Won!");
    else 
        printf("Tie!");
}


int main()
{
    Game();
    return 0;
}