
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;


int main(){

    string miles;
    double mile, kilometers;

    cout << "Enter miles: ";
    getline(cin, miles);
    mile = stod(miles);
    kilometers = mile * 1.60934;
    printf("%.1f miles equals %.4f", mile, kilometers);
    
    return 0;
}