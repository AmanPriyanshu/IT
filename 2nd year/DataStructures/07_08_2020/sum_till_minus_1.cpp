#include <iostream>
using namespace std;
int main() {
    int number, sum;
    bool flag = false;
    sum = 0;
    while(true){
        cin>>number;
        switch(number){
            case -1:
                flag = true;
                break;
            default:
                sum += number;
        }
        if(flag==true){
            break;
        }
    }
    cout<<"Sum is \t"<<sum;
}
