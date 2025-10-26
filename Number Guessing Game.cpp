#include <iostream>
#include <cstdlib>
int main() {
using namespace std;


srand(time(0));


int secret=rand() % 10; 
int guess; 
int tries=0;
<<<<<<< HEAD
const int max_tries=2;
=======
const int max_tries=1;
>>>>>>> UpdateMessage


cout<<"Guess the number, Good luck\n";
cout<<"You have "<<max_tries<<" guesses remaining\n";


while (tries<max_tries) {
cin>>guess;
tries++;




if (tries<max_tries) {
if (guess<secret) {
    cout<<"Too Low, Try again\n";
    }


if (guess>secret) {
cout<<"Too High, Try again\n";} 


if (guess==secret) {
cout<<"Correct, Well Done!\n"; break;
return 0;

}


cout<<"You have "<<max_tries-tries<<" "<<
((max_tries-tries==1) ? "guess" : "guesses")<<" left\n";
    
}


if (tries==max_tries-1) {
    cout<<"Last chance!\n";}
}
if (guess!=secret) cout<<"You failed loser, the number was "<<secret<<", better luck next time\n\n";

}

