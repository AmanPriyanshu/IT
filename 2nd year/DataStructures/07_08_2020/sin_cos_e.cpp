#include <iostream>
using namespace std;
int main() {
    int i, j;
    double x, sin, cos, e, t;
    cin>>x;
    for(i=0; i<1000;i++){
        t = 1;
        for(j=1; j<=i; j++){
            t = (t*(x))/j;
        }
        if(i%2==0){
            if(i%4==0){
                cos += t;
            }
            else{
                cos -= t;
            }
        }
        else{
            if(i%4==1){
                sin += t;
            }
            else{
                sin -= t;
            }
        }
        e += t;
    }
    cout<< "sin "<<sin<<"\ncos "<<cos<<"\ne "<<e;
}