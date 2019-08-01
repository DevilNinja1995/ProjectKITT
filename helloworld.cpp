
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std;

vector<int> Range(int start, int max,int step);

int main(){  

    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;

    while(true){
        cout << "Guess the number";
        cin >> guess;
        if (guess > secretNum) {cout << "To Big\n";}
        else if (guess < secretNum){cout << "To Small\n";} else{break;}
         
    }
    cout << "You guessed it\n";

    
    
    
    return 0;
}

vector<int> Range(int start, int max,int step){
    int i = start;

    vector<int> range;

    while(i <= max){
        range.push_back(i);
        i+=step;
    }
    return range;
}