// Name: Xavier Bunker
// Date: 3/1/2022
// Title: RPS Game
// Description: User Can play RPS With A friend

#include <iostream>

using namespace std;

int main()
{
    //Variable
    int player1; //Player 1
    int player2; //Player 2

    //Tell you what the codes does and also gives a warning
    cout << "Welcome to a Game of Rock, Paper, And Scissors!" << endl;
    cout << "*This Game Will Require Two Player*" << endl << endl;;
    //Welcomes player 1 first and ask the player to pick a number
    cout << "Welcome Player 1" << endl;
    cout << "Rock (0)" << endl;
    cout << "Paper (1)" << endl;
    cout << "Scissors (2)" << endl;
    cout << "Your choice: " << endl;
    cin >> player1;

    //Welcomes player 2 first and ask the player to pick a number
    cout << "\n" << "Welcome Player 2" << endl;
    cout << "Rock (0)" << endl;
    cout << "Paper (1)" << endl;
    cout << "Scissors (2)" << endl;
    cout << "Your choice: " << endl;
    cin >> player2;

    //This Will display The code part when it match down blow.
    //The code will display the user input and who won
    
    if (player1 > player2) //If player 1 picks a higer number to win
    {
        cout << "\n" << "Player 1: " << player1 << endl;
        cout << "Player 2: " << player2 << endl;
        cout << "Player 1 Wins" << endl;
    }
    else if (player1 < player2) //If player 2 picks a higer number to win
    {
        cout << "\n" << "Player 1: " << player1 << endl;
        cout << "Player 2: " << player2 << endl;
        cout << "Player 2 Wins" << endl;
    }
    else if (player1 = player2) //If player 1 & Player 2 picks the same number its a tie
    {
        cout << "\n" << "Player 1: " << player1 << endl;
        cout << "Player 2: " << player2 << endl;
        cout << "Player 1 & Player 2 tie" << endl;
    }
    else
     {
        cout << "Error" << endl;
     }
    return 0;
}


