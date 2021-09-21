#include <iostream>

using namespace std;


int main()
{
   
        srand((unsigned)time(0));
    int randomnegfive;
    int random;
    int again;
    random = (rand()%100)+1;
   
    int answer;
    cout <<"Guess the number (1 - 100) : ";
    cin >> answer;
    randomnegfive = random - 5;
    if (answer > 100) {
        cout <<"That is too high!";
    } else if (answer == random) {
        cout <<"That is correct!";
    } else if (answer < 0) {
        cout <<"That is too low";
    } else if (!cin) {
        cout <<"Please choose a valid number";
    } else if (1 <= answer) {
        cout <<"You were ( "<<abs(random - answer) <<" ) away from "<<random;
    } else {
        cout <<"That is incorrect, the answer is "<< random;
   
    }
    cout <<"\nWant to play again? (1 - Yes / 2 - No)\n";
    cin >> again;
    if (again == 1) {
        main();
    }
    return 0;
}
