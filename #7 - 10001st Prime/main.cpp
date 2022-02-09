#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n){
    //First filter
    if(n%2==0 && n!=2){
        return false;
    }
    if(n%3==0 && n!=3){
        return false;
    }
    if(n%5==0 && n!=5){
        return false;
    }
    if(n%7==0 && n!=7){
        return false;
    }

    //Deeper filter - divide by all numbers below it to ensure its a prime number
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

bool isPrimeFast(int n){
    //First filter
    if(n%2==0 && n!=2){
        return false;
    }
    if(n%3==0 && n!=3){
        return false;
    }

    /*
    The consequence for primality testing of a number n is: if we cannot find a number f less than
    or equal n that divides n then n is prime: the only primefactor of n is n itself
    */
    //Deeper filter
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int nthPrimeNumber(int n){
    int i=1, j=1;
    while(i<=n){
        j++;
        if(isPrimeFast(j)==true){
            i++;
        };
    }
    return j;
}

int main()
{
    cout << nthPrimeNumber(10001) << endl;
    return 0;
}
