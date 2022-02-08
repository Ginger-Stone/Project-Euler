#include <iostream>
#include <math.h>

using namespace std;
const int x = 1000;

int findABC(){
    int sum=0;
    for(int i=3; i<x; i++){
        for(int j=2; j<x; j++){
            for(int k=1; k<x; k++){
                sum=k+j+i;
                if(sum==x && (pow(k,2)+pow(j,2)-pow(i,2))==0){
                    cout<<k<<" "<<j<<" "<<i<<endl;
                    cout<<k*j*i<<endl;
                }
            }
        }
    }
}

int main()
{
    findABC();

    return 0;
}
