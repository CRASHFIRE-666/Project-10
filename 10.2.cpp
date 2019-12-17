#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double rez;
    cout<<"Введите n"<<endl;
    cin>>n;
    rez=1;
    for (int i=1; i<=n; i++)
    {
        rez=rez*(1+i*0.1);
    }
    cout<<"Результат="<<rez<<endl;
    return 0;
}
