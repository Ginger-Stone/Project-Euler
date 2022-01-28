#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int smallestMultipleFromMaxNotOdd(){
    bool Found = false;
    uint64_t counter = 1, max_val = 20, min_val=1;
    while(!Found){
        counter++;
        //Skip number that is not odd
        if(counter%2!=0){
            continue;
        }
        for(int i=max_val; i>=min_val; i--){
            //Skip number if found not to be divisible by current number
            if(counter%i!=0){
                break;
            }
            //If the counting gets to min value, then we have found or number
            if(counter%i==0 && min_val==i){
                Found=true;
            }
        }
    }
    return counter;
}

int smallestMultipleStartingFromMaxVal(){
    bool Found = false;
    uint64_t counter = 1, max_val = 20, min_val=1;
    while(!Found){
        counter++;
        for(int i=max_val; i>=min_val; i--){
            if(counter%i!=0){
                break;
            }
            if(counter%i==0 && min_val==i){
                Found=true;
            }
        }
    }
    return counter;
}

int smallestMultipleStartingFromMinVal(){
    bool Found = false;
    uint32_t counter = 1, max_val = 20;
    while(!Found){
        counter++;
        for(int i=2; i<=max_val; i++){
            if(counter%i!=0){
                break;
            }
            if(counter%i==0 && max_val==i){
                Found=true;
            }
        }
    }
    return counter;
}

int main()
{
    auto start = high_resolution_clock::now();
    cout<<smallestMultipleStartingFromMinVal()<< endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout <<"Time taken: (ms)"<<  duration.count() << endl;

    start = high_resolution_clock::now();
    cout<<smallestMultipleStartingFromMaxVal()<< endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    cout <<"Time taken: (ms)"<<  duration.count() << endl;

    start = high_resolution_clock::now();
    cout<<smallestMultipleFromMaxNotOdd()<< endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    cout <<"Time taken: (ms)"<<  duration.count() << endl;
}
