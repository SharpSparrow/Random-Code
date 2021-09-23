// Still in development //
// Planned Changes : Timer for time limit //
#include <iostream>
#include <time.h>

using namespace std;

time_t start = time(0);
int streak;
int main()
{
    




    int answer;
    int random;
    
    srand((unsigned)time(0));
     random = (rand()%9)+1;
      int random2;
    double seconds_since_start = difftime( time(0), start);
     random2 = (rand()%9)+1;
     cout <<"("<< seconds_since_start <<")"<<random<<" * "<<random2<<" = ";
     cin >> answer;
      if (seconds_since_start >= 60) {
        cout <<"\nToo Late\nYour streak was "<<streak<<"!\n";
    return 0;
          
      }
    
     if (answer == (random *random2)) {
         streak = streak + 1;
         cout <<"Correct - ( Streak = "<<streak<<")\n";
        
         main();
         
     } else if (!cin) {
         cout <<"Please choose a valid number";
     } else {
         cout <<"Incorrect | The answer was "<<random *random2<<"!\n";
         cout <<"You had a streak of "<<streak<< "!";
     }

    return 0;
}
