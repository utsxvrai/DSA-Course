#include<iostream>
using namespace std;

int main(){
    int n, i=2;
    cout<<"Enter the Numbetr"<<endl;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"%d is not a Prime Number"<<n;
        }
        else{
            cout<<"Prime Number";
        }
        i=i+1;
    }
}