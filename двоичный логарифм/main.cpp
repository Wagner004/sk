#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p=1, k=0;
    while (p<n){
        p *=2;
        k++;
    }
    cout <<k;
    return 0;
}
