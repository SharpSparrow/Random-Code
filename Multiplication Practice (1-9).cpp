// Still in development //
// Planned Changes : Timer for time limit //
#include <iostream>


using namespace std;


int streak;
int main()
{
    
    int answer;
    int random;
    
    srand((unsigned)time(0));
     random = (rand()%9)+1;
      int random2;
    
     random2 = (rand()%9)+1;
     cout <<random<<" * "<<random2<<" = ";
     cin >> answer;
     if (answer == (random *random2)) {
         streak = streak + 1;
         cout <<"Correct - ( Streak = "<<streak<<")\n";
         main();
         
     } else if (!cin) {
         cout <<"Please choose a valid number";
     } else {
         cout <<"Incorrect\n";
         cout <<"You had a streak of "<<streak<< "!";
     }

    return 0;
}
