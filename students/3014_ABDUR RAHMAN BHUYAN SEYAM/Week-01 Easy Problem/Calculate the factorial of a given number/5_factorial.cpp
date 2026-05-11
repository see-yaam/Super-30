#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
int mult=fact(n-1);
return n*mult;
}

int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans;
} 