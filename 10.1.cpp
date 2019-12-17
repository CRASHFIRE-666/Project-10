#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float cost;
    cout<<"Введите цену конфет"<<endl;
    cin>>cost;
    for (int i=1; i<=10; i++)
    {
        cout<<"Стоимость="<<cost*0.1*i<<endl;
    }
    return 0;
}
