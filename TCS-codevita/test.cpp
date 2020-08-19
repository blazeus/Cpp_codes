#include<iostream>

using namespace std;

int main() {
    string str1="ABC", str2="ACB";
    if (str1 == str2)
        cout << "Same";
    str1 = str2;
    str1[1] = 'B';
    if (str1[1]=='B')
        cout << "Same";
    return 0;
}