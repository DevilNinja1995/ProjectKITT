
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

using namespace std;

string VectorToString(vector<string> names, char divider);

int main(){  

    vector<string> vCusts(3);
    vCusts[0] = "Bob";
    vCusts[1] = "Sue";
    vCusts[2] = "Tom";

    string sCusts = VectorToString(vCusts, ' ');
    cout << sCusts << "\n";

    return 0;
}
string VectorToString(vector<string> names, char divider){

    string sCust = "";
    for (string y : names)
    {
        sCust+=y;
        sCust+=" ";
    }
    return sCust;
}