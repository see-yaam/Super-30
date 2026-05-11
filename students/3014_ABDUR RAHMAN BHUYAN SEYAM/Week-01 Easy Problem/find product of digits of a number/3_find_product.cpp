#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num;
    int mult=1;
    cin>>n;

while(n>0){
    num=n%10;
    n=n/10;
    mult=mult*num;
}
cout<<mult;
}