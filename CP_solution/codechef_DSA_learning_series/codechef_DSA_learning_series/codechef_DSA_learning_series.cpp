#include <iostream> 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//Solution Functions
int LAPIN();


int main()
{
    LAPIN();
    return 0;
}

//Lapindromes

int LAPIN()
{
    vector<char> part1, part2;
    string inputString;
    int mid, len,n;
    cin >> n;
    while (n) {
        part1.clear();
        part2.clear();
        cin >> inputString;
        len = inputString.length();
        mid = (len % 2 == 0) ? (len / 2) : (len / 2 + 1);
        for (int i = 0, j = mid; j < len; i++, j++)
        {
            part1.push_back(inputString[i]);
            part2.push_back(inputString[j]);
        }
        sort(part1.begin(), part1.end());
        sort(part2.begin(), part2.end());

        //for (int i = 0; i < part1.size(); i++)
        //{
        //    cout << part1.at(i) << ' ';
        //}
        //for (int i = 0; i < part2.size(); i++)
        //{
        //    cout << part2.at(i) << ' ';
        //}

        if (part1 == part2)
        {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        --n;
    }
    return 0;
}