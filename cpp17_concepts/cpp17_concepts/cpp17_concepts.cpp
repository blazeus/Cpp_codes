// Fundamentals of CPP17

#include <iostream>
#include "Tweeter.h"
#include "Status.h"

using namespace std;

int main()
{
    int a(90);  // Initialization at declaration
    
    cout << a <<endl;

    //Enum usage
    /*
    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;
    */

    Person p1;
    {
        Tweeter t1("Someone", "Else", 456, "@whoever");
        string name2 = t1.getName();
    }
    {
        Person p2("Kate", "gregory", 123);
        string name = p2.getName();
        cout << name <<endl;
    }
    p1.enterDetail();
    string name = p1.getName();
    cout << name <<endl;
    return 0;
}

