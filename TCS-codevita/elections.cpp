#include<iostream>

using namespace std;

int main() {
    string str;
    int n,a=0,b=0,c=0;
    cin >> n;
    cin >> str;
    string next="A",prev="B";
    while(next != prev) {
        prev = str;
        for (int i=0; i<n; i++) {
            if(prev[i] == '-') {
                if(i!=0) {
                    if(prev[i-1] == 'B' && prev[i+1] != 'A')
                        str[i] = 'B';
                    else 
                        if (prev[i+1] == 'A' && prev[i-1] != 'B')
                            str[i] = 'A';
                }
                else if (i==0) {
                    if(prev[i+1] == 'A')
                        str[i] = 'A';
                else if(i==(n-1)){
                    if(prev[i-1]=='B')
                        str[i] = 'B';
                }
                }
            }
        }
        next = str;
    }

    for(int i=0; i<n; i++) {
        if(str[i] == 'A')
            a++;
        else if(str[i] == 'B')
            b++;
        else 
            c++; 
    }

    if(a>b) {
        cout << 'A';
    } else if (b>a) {
        cout << 'B';
    } else if(a==b){
        cout << "Coalition government";
    }
    return 0;
}

