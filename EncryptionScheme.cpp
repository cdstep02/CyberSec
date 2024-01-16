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
    int numOfBi = 1;
    for(int i = n; i > 0; --i)
    {
        numOfBi *= i;
    }
    cout << numOfBi;
    return 0;
}
