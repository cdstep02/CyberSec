#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string message;
    cin >> message;
    int e;
    cin >> e;
    char* cipher = new char[message.length()];
    int temp;
    for(int i = 0; i < message.length(); ++i)
    {
       temp = (int) message[i] + e;
       if(temp > 57)
       {
           cipher[i] = temp - 10;
       }
       else
       {
           cipher[i] = temp;
       }
    }
    for(int k = 0; k < message.length(); ++k)
    {
        cout << cipher[k];
    }
    return 0;
}
