#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, N;
    N = 0;
    
    
    do{
        cout << "Введите число";
        cin >> n;
        if (n > 0){
            for (i = 1; i <= n; i++){
                N += i * 2 - 1;
                cout << i * 2 - 1 << " ";
                if (i < n){
                    cout << "+ ";
                }
            }
            cout << "= " << N << endl;
            break;
        }
        else{
            cout << "Попробуйте снова" << endl;
        }
        
    }while (true);

    
    
    return 0;
}
