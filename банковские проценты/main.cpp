#include <iostream>

using namespace std;

int main()
{
    int x, p, y;
    cin >>x>>p>>y;
    int g=0;
    while (x<y){
        x += p/100.0 * x;
        g++;
    }
    cout <<g;
    return 0;
}
