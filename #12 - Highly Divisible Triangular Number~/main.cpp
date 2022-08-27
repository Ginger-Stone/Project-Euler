#include <iostream>
#include <math.h>

using namespace std;

int implied_factor=-1;
static const int x = 500;

int getTriangleNumber(int n){
    int sum=0;
    for(int i=n; i>0; i--){
        sum+=i;
    }
    cout<<sum<<endl;
    return sum;
}

int getNumberOfFactors(int tn){
    cout<<"factors for: "<<tn<<endl;
    int counter=1; // initialized to one to always include the number itself
    for(int i=1; i<=floor(tn/2); i++){ //tn/2 as the factors cannot be greater than half the value tn. above half will have remainders and floor to round up
        if(tn%i==0){
            cout<<i<<" ";
            counter++;
        }
    }
    cout<<endl;
    return counter;
}

int getNumberOfFactorsFaster(int tn){ //gets two factors at a go eg if i=2 and tn=28 then implied_factor=28/2=14
    cout<<"factors for: "<<tn<<endl;
    int counter=0;
    for(int i=1; i<=floor(tn/2); i++){ //tn/2 as the factors cannot be greater than half the value tn. above half will have remainders and floor to round up
        if(tn%i==0){
            implied_factor=tn/i;
            if(i==implied_factor || i>=implied_factor)break;
            cout<<i<<" -->"<<implied_factor<<" ";
            counter+=2;
        }
    }
    cout<<counter<<endl;
    return counter;
}

int getOneWithNFactorsNaive(int n){ //completes in around 15 minutes
    bool firstOverNFactors =false;
    int triangleNumber, numberOfFactors;
    int i=1;
    while (!firstOverNFactors){
        triangleNumber = getTriangleNumber(i);
        numberOfFactors = getNumberOfFactors(triangleNumber);
        if(numberOfFactors>n){
            firstOverNFactors=true;
        }
        i++;
    }
    return triangleNumber;
}

int getOneWithNFactorsFaster(int n){ //completes in around 15 minutes
    bool firstOverNFactors =false;
    int triangleNumber, numberOfFactors;
    int i=1;
    while (!firstOverNFactors){
        triangleNumber = getTriangleNumber(i);
        numberOfFactors = getNumberOfFactorsFaster(triangleNumber);
        if(numberOfFactors>n){
            firstOverNFactors=true;
        }
        i++;
    }
    return triangleNumber;
}

int main()
{
    //cout << getOneWithNFactorsNaive(x) << endl; //
    cout << getOneWithNFactorsFaster(x) << endl; //154.294s (2.6min) Ans=76576500
    return 0;
}
