#include <iostream>
#include <cstdlib>
int main() {
using namespace std;


srand(time(0));


int secret=rand() % 10+1; 
int guess; 
int tries=0;
const int max_tries=7;


cout<<"\nGuess the number, Good luck\n";
cout<<"\nYou have "<<max_tries<<" guesses remaining\n";


while (tries<max_tries) {
cin>>guess;
tries++;




if (tries<max_tries) {
if (guess<secret) {
    cout<<"\nToo Low, Try again\n";
    }


if (guess>secret) {
cout<<"\nToo High, Try again\n";} 


if (guess==secret) {
cout<<"\nCorrect, Well Done!\n"; break;
return 0;

}


cout<<"\nYou have "<<max_tries-tries<<" "<<
((max_tries-tries==1) ? "guess" : "guesses")<<" left\n";
    



if (tries==max_tries-1) {
    cout<<"\nLast chance!\n";}
}
}
if (tries==max_tries && guess!=secret) {cout<<"\nYou failed loser, the number was "<<secret<<", better luck next time\n\n";}

}



