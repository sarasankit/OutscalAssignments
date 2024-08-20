#include <iostream> 

using namespace std;

int main()
{
    int playerHealth,livesCount,playerId,winPercentage;
    char hasPlayerWon,playerType;

    // Take user input to populate values
    cout << "Enter Player Current Health as %" << endl;
    cin >> playerHealth;
    cout << "Enter Player Lives Count as value" << endl;
    cin >> livesCount;
    cout << "Enter Player Id as value" << endl;
    cin >> playerId;
    cout << "Enter Player Win Percentage as %" << endl;
    cin >> winPercentage;
    cout << "Enter if player has ever won(Y/N) "<< endl;
    cin >> hasPlayerWon;
    cout << "Enter Player Type(A/B/C/D)" << endl;
    cin >> playerType;

    cout << "Player Current Health " << playerHealth << "%" << endl;
    cout << "Player Lives Count " << livesCount << endl;
    cout << "Player Id " << playerId << endl;
    cout << "Player Win Percentage " << winPercentage << "%" << endl;
    cout << "Has Player Won "<< hasPlayerWon << endl;
    cout << "Player Type " << playerType << endl;
    
    return 0;
}   
