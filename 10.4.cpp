 #include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, x;
    double a;
    x = 0;
    cin >> n >> a;
    if (n > 0){
        for (i = 0; i <= n; i++){
            x += pow (a, i);
        }
        cout << x  << endl;
    }
    else{
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    
    return 0;
}
