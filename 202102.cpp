#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, b, c;
    cin >> a >> b;
    c = a ^ b;
    int dis = 0;
    for (int i = 0; i < 64; ++i)
    {
        dis=dis+(c&1);
        c=c>>1;
    }
    cout<<dis<<endl;
    return 0;
}