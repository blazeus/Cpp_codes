#include <iostream>

using namespace std;

int main() {
    int T, x1, x2, y1, y2, n;
    string S;
    int R, L, D, U, r, l, d, u;

    cin >> T;

    while(T--) {
        R=L=D=U=0;
        cin >> S;
        for(char ch: S) {
            switch(ch){
                case 'R': R++; break;
                case 'L': L++; break;
                case 'D': D++; break;
                case 'U': U++; break;
                default: break;
            }
        }
        cin >> x1 >> y1 >> n;
        while(n--) {
            r=l=d=u=0;
            cin >> x2 >> y2;
            (x2 > x1)?r=(x2-x1):l=(x1-x2);
            (y2 > y1)?u=(y2-y1):d=(y1-y2);

            if(R>=r && L>=l && D>=d && U>=u)
                cout << "YES " << (r+l+d+u) << endl;
            else
                cout << "NO" << endl;
        }
    }
}