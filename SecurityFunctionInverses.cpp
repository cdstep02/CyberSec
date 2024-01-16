#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int second;
    cin >> n;
    int t = 0;
    int* fofx = new int[n];
    int* g = new int[n];
    char blank = ' ';
    while(t < n)
    {
        //initializes the array
        cin >> second;
        if((char) second != blank)
        {
            fofx[t] = second;
            ++t;
        }
    }
    int y = 1; 
    
    for(int i = 0; i < n; ++i)
    {
        int temp;
        temp = fofx[i];
        g[temp - 1] = y;
        ++y;
    }
    for(int j = 0; j < n; ++j)
    {
        cout << g[j] << "\n";
    }
    
    return 0;
}

