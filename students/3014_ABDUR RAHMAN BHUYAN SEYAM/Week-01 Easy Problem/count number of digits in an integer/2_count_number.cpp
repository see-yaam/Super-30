#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count=0;
    cin>>n;
/*
    123/10=12
    12/10=1
    1/10=0 
*/
while(n>0){
    n=n/10;
    count++;
}
cout<<count;
}