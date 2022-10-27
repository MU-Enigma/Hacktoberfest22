#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<char>> board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

int complete(vector<vector<char>> board)
{
    // board must be full or there must be a row or column or diagonal of X or O
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != '-')
            return board[i][0];
    }
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != '-')
            return board[0][i];
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != '-') || 
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != '-'))
    {
        return board[0][0];
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == '-')
                return 0;
    return 1;
}

int main()
{
    // initialize board
    vector<vector<char>> board(3);
    for (int i = 0; i < 3; i++)
    {
        vector<char> row(3);
        row[0] = row[1] = row[2] = '-';
        board[i] = row;
    }

    char turn = 'X';
    int completed;
    do
    {
        int x, y;
        do
        {
            print(board);
            cout<<"It is "<<turn<<"'s turn. Choose location (x y)"<<endl;
            cin>>x>>y;
            if (x>2 || y>2 || board[x][y]!='-')
            {
                cout<<"Invalid move"<<endl;
            }
            else{
                break;
            }
        } while(true);
        board[x][y] = turn;
        turn = (turn=='X') ? 'O':'X';
        completed = complete(board);
    } while (completed==0);
    print(board);
    cout<<"Game Over"<<endl;
    if (completed==1)
    {
        cout<<"The result is a tie!"<<endl;
    }
    if ((char)completed=='X' || (char)completed=='O')
    {
        cout<<(char)completed<<" is the winner!"<<endl;
    }

    return 0;
}