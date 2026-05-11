// (1^3 + 5^3 + 3^3 = 153)

#include<bits/stdc++.h>
using namespace std;


int main(){

int n;
int temp;
cin>>n;
temp=n;
int num;
int sum=0;
while(n>0){
    num=n%10;
    n=n/10;
    sum=sum+(num*num*num);
}


if(sum==temp){
cout<<"armstrong";
}
else{
    cout<<"nope";
}
}


// 153%10=3
// 3^3