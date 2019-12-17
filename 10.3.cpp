#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,rez,i;
    cout<<"Введите n"<<endl;
    cin>>n;
    rez=0;
    i=1;
    while (i<=(2*n-1))
    {
        rez+=i;
        i+=2;
        cout<<rez<<endl;
    }
    cout<<"Результат="<<rez<<endl;
    return 0;
}
