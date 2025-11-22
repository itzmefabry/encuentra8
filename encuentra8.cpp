// Source: https://usaco.guide/general/io


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        int num;
        cin>>num;
        if (num==8) {
            cout<<1<<endl;
            return 0;
        }
    }
    
    cout<<0<<endl;
    return 0;
}