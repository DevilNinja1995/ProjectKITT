
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

using namespace std;

vector<int> Range(int start, int max,int step);

int main(){

    vector<int> range = Range(1, 10 ,2);
    for (auto i: range ) cout << i << "\n";


    
    
    
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