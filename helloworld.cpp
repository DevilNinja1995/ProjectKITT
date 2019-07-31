
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

using namespace std;


int main(){

    vector<int> myVec(10);
    iota(begin(myVec), end(myVec), 1);

    for (auto i: myVec)
    {
        if ((i % 2) == 0 )
        {
            cout << i << " is even\n";
        }
        
    }
    
    
    return 0;
}