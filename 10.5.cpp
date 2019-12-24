#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, x, t;
    double a;
    x = 0;
    t = 1;
    cin >> n >> a;
    if (n > 0){
        for (i = 1; i <= n; i++){ 
            x += t;
            t = -1 * pow (a, i);
        }
        cout << x  << endl;
    }
    else{
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    
    return 0;
}
