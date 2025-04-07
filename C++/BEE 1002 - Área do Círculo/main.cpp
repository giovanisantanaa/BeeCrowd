#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double r, a, pi = 3.14159;
    
    cin >> r;

    a = pi * r * r;

    cout << fixed << setprecision(4);
    cout << "A=" << a << endl;
 
    return 0;
}