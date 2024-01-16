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
    int t = 0;
    int* x = new int[n];
    while(t < n)
    {
        int input;
        cin >> input;
        x[t] = input;
        ++t;
    }
    int fofx;
    int foffofx;
    int check = 0;
    for(int i = 0; i < n; ++i)
    {
        fofx = x[i];
        foffofx = x[fofx - 1];
        if(foffofx == i + 1)
        {
            ++check;
        }
        else
            continue;
    }
    if(check == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
