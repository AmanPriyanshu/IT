#include <iostream>
using namespace std;
int main() {
    int number, i;
    bool flag;
    flag = true;
    cout<<"Enter a number\n";
    cin>>number;
    for(i=2; i<number/2;i++){
        if(number%i==0){
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<number<<"\nPrime NUmber";
    }
    else{
        cout<<number<<"\nNot a prime number";
    }
}
