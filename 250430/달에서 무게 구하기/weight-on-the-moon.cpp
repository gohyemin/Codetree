#include <iostream>
using namespace std;

int main() {
    int weight =  13;
    double vi = 0.165;
    
    cout << fixed;

    cout << weight << " * ";
    cout.precision(6);
    cout << vi << " = ";
    cout.precision(6);
    cout << weight * vi;
    return 0;
}