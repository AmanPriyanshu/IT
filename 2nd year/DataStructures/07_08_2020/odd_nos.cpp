#include <iostream>
using namespace std;
int main() {
    int m, n, i, start;
    cin>>m>>n;
    if(m%2==0){
        start = m+1;
    }
    else{
        start = m;
    }
    for(i=start; i<=n;i+=2){
        cout<<i<<"\n";
    }
}
