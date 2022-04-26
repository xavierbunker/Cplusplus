// Name:
// Date:
// Title:
// 

#include <iostream>
#include <iomanip>
using namespace std;
void RPS(char player1, char player2);

int main()
{
    char player1, player2; //Defining my variables

    cout << "The Rock Paper Scissor Game" << endl;
    cout << "Let's play rock, paper, scissor with your friend!" << endl;
    cout << "Enter choice (r for Rock, p for Paper, s for Scissors) for Player 1: ";
    cin >> player1;
    cout << "Enter choice (r for Rock, p for Paper, s for Scissors) for Player 2" << endl; //Greeting the user and asking them to enter information to play the game
    cin >> player2; //User input for what they choose

    RPS(player1, player2);

    return 0;
}
void RPS(char player1, char player2)
{
    if (player1 == 'r' && player2 == 'p')
    {
        cout << "Player 2 wins!" << endl;

    }
    else if (player1 == 'r' && player2 == 's')
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (player1 == 'p' && player2 == 'r')
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (player1 == 'p' and player2 == 's')
    {
        cout << "Player 2 wins!" << endl;
    }
    else if (player1 == 's' and player2 == 'r')
    {
        cout << "Player 2 wins!" << endl;
    }
    else if (player1 == 's' and player2 == 'p')
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (player1 == player2)
    {
        cout << "Its a tie!" << endl;
    }
}