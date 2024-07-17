#include <iostream>
using namespace std;
int main()
{
    int remain;
    int shang;
    cin >> remain;
    while (remain >= 7)
    {
        shang = remain / 7;
        remain = remain % 7;
        cout<<shang;
    }
    cout<<remain;
}