#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    double p, k;
    
    cin >> p;
    k = 0.1;
    while (k <= 1){
        cout << p * k << endl;
        k += 0.1;
    }
}
