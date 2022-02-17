#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>

using namespace std;


const int m=20, n=20;
int numbers[m][n], i=0, j=0;

void loadData(){
    ifstream indata;
    int num;
    indata.open("data.dat");
    if(!indata){
        cerr<< "Error: file could not be opened"<<endl;
        exit(1);
    }
    indata>>num; //This ensures that initial zero is left out
    while(!indata.eof()){
        if(j==20){
            j=0;
            i++;
        }
        numbers[i][j]=num;
        indata>>num; // sets EOF flag if no value found
        j++;
    }
    indata.close();
    //cout<<"End-of-file reached..."<<endl;
}

void displayTwoDArray(int arr[m][n]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int greatestProductAllDirections(){
    int i=0, j=0,ph=0,pv=0,pdf=0,pdb=0,gp=0;
    int* g_p;
    while(i<m){
        ph=(numbers[i][j]*numbers[i][j+1]*numbers[i][j+2]*numbers[i][j+3]);
        pv=(numbers[i][j]*numbers[i+1][j]*numbers[i+2][j]*numbers[i+3][j]);
        pdf=(numbers[i][j]*numbers[i+1][j+1]*numbers[i+2][j+2]*numbers[i+3][j+3]);
        if(j>=3){
            pdb=(numbers[i+3][j-3]*numbers[i+2][j-2]*numbers[i+1][j-1]*numbers[i][j]);
        }
        int p[] = {ph, pv, pdf, pdb};
        g_p=max_element(p, p+4);
        (*g_p>gp)?gp=*g_p:false;
        //cout<<ph<<" "<<pv<<" "<<pdf<<" "<<pdb<<" "<<gp<<endl;

        j++;
        if(j+3>=n){
            j=0;
            i++;
        }
        if((i+3)>=m){
            break;
        }
    }

    return gp;
}

int main()
{
    loadData();
    cout<<greatestProductAllDirections()<<endl;;

    return 0;
}
