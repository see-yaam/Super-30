//  [ x - x^3 + x^5 - ......]



#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int t;
    int sum=0;
    cin>>n>>t;
    for(int i=1;i<=t;i++){
        int power=2*i-1;

        int sign;

                if(i % 2 == 1){
            sign = 1;   
        } else {
            sign = -1;  
        }

         sum =sum + sign * pow(n, power);
    }

    cout<<sum;


}