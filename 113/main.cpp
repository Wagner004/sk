#include <iostream>
using namespace std;

int main()
{
   int N;
   cin >> N;
   int i=1;
   int a = i*i;
   while (a<=N){
      cout << a << endl;
        i++;
        a = i*i;
   }
    return 0;
}
