/*
MADE BY MCTVR
OPEN SOURCED
ONLY ON GITHUB
EASY FOR BEGINNERS
EASY MATH CALCULATOR 
C++
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool x = true;
    while (x == true) {
        double n1;
        string op;
        double n2;
        cout << "\n Enter the first number here: ";
        cin >> n1;
        cout << "\n Enter the operator(+, -, *, /): ";
        cin >> op;
        cout << "\n Enter the second number: ";
        cin >> n2;

        string psum = to_string(n1 + n2);
        string msum = to_string(n1 - n2);
        string tsum = to_string(n1 * n2);
        string dsum = to_string(n1 / n2);

        if (op == "+") {
            cout << "\n Answer is: " + psum + "\n";
        }
        else if (op == "-") {
            cout << "\n Answer is: " + msum + "\n";
        }
        else if (op == "*" || op == "x") {
            cout << "\n Answer is: " + tsum + "\n";
        }
        else if (op == "/") {
            cout << "\n Answer is: " + dsum + "\n";
        }
        else {
            break;
        }

        return 0;
    }
}

/*
MADE BY MCTVR IN HONG KONG
VERSION 0.2 (111ee4)
WILL UPDATE TO ADD FEATURES AND FIX BUGS
*/