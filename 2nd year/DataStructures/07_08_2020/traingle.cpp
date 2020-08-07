#include <iostream>
using namespace std;
int main() {
    int n, i, j, c;
    cout<<"Triangle, enter n\n";
    cin>>n;
    cout<<n<<"\n";
    i = 1;
    c = 1;
    bool flag = false;
    while(true){
        for(j=0; j<i; j++){
            cout<<c<<" ";
            if(c==n && j==i-1){
                flag = true;
                break;
            }
            else if(c==n){
                flag = true;
                cout<<"\nTriangle did not complete bye";
                break;
            }
            c++;
        }
        if(flag==true){
            break;
        }
        i++;
        cout<<"\n";
    }
}