#include <iostream>
#include <math.h>

using namespace std;

int sumOfSquares(int n){
    int sos = 0;
    for (int i=1; i<=n; i++){
        sos+=pow(i,2);
    }
    return sos;
}

int squareOfSum(int n){
    int sos = 0;
    for (int i=1; i<=n; i++){
        sos+=i;
    }
    return pow(sos,2);
}

int main()
{
    int diff = squareOfSum(100)-sumOfSquares(100);
    cout << diff<< endl;
    return 0;
}
