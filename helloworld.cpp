
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;


int main(){

    cout << "Enter your problem: ";
    string sSentence;
    getline(cin,sSentence);
    vector<string>vecsWords;
    stringstream ss(sSentence);
    string sIndivStr;
    char cSpace = ' ';
    double total = 0;

    while(getline(ss, sIndivStr,cSpace))
    {
        vecsWords.push_back(sIndivStr);
    }
    
    int nInt1 = stoi(vecsWords[0]);
    int nInt2 = stoi(vecsWords[2]);

    if (vecsWords[1] == "/")
    {
        total = nInt1 / nInt2; 
    } else if (vecsWords[1] == "+")
    {
        total = nInt1 + nInt2; 
    } else if (vecsWords[1] == "-")
    {
        total = nInt1 - nInt2; 
    } else if (vecsWords[1] == "*")
    {
        total = nInt1 * nInt2; 
    } else
    {
        cout << "Error wrong operator used!";
    }
    
    
    
    
    for (int i = 0; i < vecsWords.size(); ++i)
    {
       cout << vecsWords[i] + " ";
    }
    cout << "= " << total;
    
    

    
    return 0;
}