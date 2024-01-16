#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string message;
    cin >> message;
    char* cipher = new char[message.length()];
    int temp;
    int temp2;
    char nine = '9';
    char zero = '0';
    for(int i = 0; i < message.length(); ++i)
    {
        if(message[i] != nine)
        {
            temp = (int) message[i] + 1;
            cipher[i] = (char) temp;
        }
        else
        {            
            cipher[i] = zero;
        }
    }
    for(int k = 0; k < message.length(); ++k)
    {
        cout << cipher[k];
    }
    return 0;
}
