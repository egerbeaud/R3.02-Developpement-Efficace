#include <iostream>
#include <cstdio>

using namespace std;

int sommeR(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sommeR(n - 1);
    }
}

int main(){
    int n = 10;
    int result = sommeR(n);
    cout << "La somme des premiers " << n << " entiers est: " << result << endl;
    return 0;
}