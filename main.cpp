#include <iostream>

using namespace std;

int main()
{
    int a,b ;
    cin >> a >> b ;
    int sum=0;
    if (a>b)
    {
       for (int i =b; i >= a  ; i--)
        {
            sum+=i;
            cout<<i<<"+";
        }
    }
    else
        for (int i =a; i >= b  ; i--)
        {
            sum+=i;
            cout<<i<<"+";
        }
    cout<<"="<<sum;
     return 0;
}
