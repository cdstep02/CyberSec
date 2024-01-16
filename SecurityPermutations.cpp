#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int* fofx = new int[n];
    int* fofofx = new int[n];
    int t = 0;
    int input;
    while(t < n)
    {
        cin >> input;
        fofx[t] = input;
        ++t;
    }
    int temp;
    for(int i = 0; i < n; ++i)
    {
        temp = fofx[i];
        fofofx[i] = fofx[temp - 1];
        
    }
    for(int k = 0; k < n; ++k)
    {
        cout << fofofx[k] << "\n";
    }
    
    return 0;
}
