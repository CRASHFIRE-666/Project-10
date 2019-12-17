#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,n;
    float rez,a;
    cout<<"Введите A и N"<<endl;
    cin>>a>>n;
    rez=1;
    i=1;
    while (i<=n)
    {
        rez=rez+pow(a,i);
        i++;
    }
    cout<<"Результат="<<rez<<endl;
    return 0;
}
