#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std;

int main(){

    string names = "Hello my name is Farhat";
    vector<string> vecsWords;
    stringstream ss(names); 
    char divisor = ' ';
    string temp;

    while(getline(ss, temp, divisor)){

        vecsWords.push_back(temp);

    }

    for (int i = 0; i < vecsWords.size(); ++i)
    {
        cout << vecsWords[i] << "\n";
    }
    

    return 0;
}