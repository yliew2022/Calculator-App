#include <iostream>
#include "power.c"
using namespace std;


int NCR(int n,int r){
    if(n==r) 
        return 1;
    if (r==0&&n!=0) 
        return 1;
    else 
        return (factorial(n)/(factorial(r)*(factorial(n - r))));
}

int main(){
    int n;  
    cout<<"Enter A Digit for n";
    cin>>n;
    int r;
    cout<<"Enter A Digit for r";
    cin>>r;
    int result=NCR(n,r);
    cout<<result;
    return 0;
}
