#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double k = 1.1;
    double p = 1.2;
    
    
    do{
        cout << "Введите число";
        cin >> n;
        
        if (n > 1){
            do{
                n --;
                k = k * p;
                p += 0.1;
            } while (n > 1);
            cout << k << endl;
            break;
        }
        else if (n == 1){
            cout << k << endl;
            break;
        }
        else{
            cout << "Попробуйте снова" << endl;
        }
    } while (true);
    
    return 0;
}
