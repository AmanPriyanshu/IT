#include <iostream>
using namespace std;
int main() {
    int i, n, f, j;
    for(i=0; i<10; i++){
        cin>>n;
        f = 1;
        for(j=1; j<=n; j++){
            f = f*j;
        }
        cout<<n<<"! = "<<f<<"\n";
    }
}
