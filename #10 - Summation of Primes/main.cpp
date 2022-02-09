#include <iostream>
#include <math.h>

using namespace std;

const int x = 2000000;
const int prime_arr[x/2]={0}; //all evens cannot be prime

bool isPrimeX2(int n){
    //First filter
    if(n%2==0 && n!=2){
        return false;
    }
    if(n%3==0 && n!=3){
        return false;
    }

    /*
    The consequence for primality testing of a number n is: if we cannot find a number f less than
    or equal sqrt(n) that divides n then n is prime: the only primefactor of n is n itself --applies for primes greater than 3.
    */
    //Deeper filter
    int max_val = floor(sqrt(n));
    for(int i=3; i<=max_val; i+=2){ //skip the positive numbers
        if(n%i==0){
            return false;
        }
    }

    return true;
}

uint64_t sumPrimes(int n){
    int i=2;
    uint64_t sum=0;
    while(i<n){
        if(isPrimeX2(i)==true){
            sum+=i;
        };
        i++;
    }
    return sum;
}

int main()
{
    cout << sumPrimes(x) << endl;
    return 0;
}
