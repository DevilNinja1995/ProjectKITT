#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std;
int main(void){

    int speler = 0;
    int speler2 = 1;
    cout << "Speler 1 voer een cijfer 1: ";
    cin >> speler;

    for (size_t i = 0; i < 15; i++)
    {
        cout << "\n";
    }

    while(speler != speler2){

        cout << "Speler 2 gok de cijfer van speler 1: ";
        cin >> speler2;
        if(speler2 > speler){
            cout << "Je hebt te hoog gegokt" << "\n" << "Probeer het nog een keer ";
        } else if(speler > speler2){
             cout << "Je hebt te laag gegokt" << "\n" << "Probeer het nog een keer ";
        }
        cout << "\n";
    }

    cout << "Speler 2, je hebt het goed gegokt!";
    
    
    
}