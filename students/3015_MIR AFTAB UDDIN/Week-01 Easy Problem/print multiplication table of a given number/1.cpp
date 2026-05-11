#include <iostream>
#include <cmath>
using namespace std;
int main(){


    int num;
    cout<<"Enter a Number: ";
    cin>> num;

    for(int i =1; i <= 10 ; i++){
        int mul= num*i;
        cout << num <<" * "<< i <<" = "<<mul << '\n';
       
    }


    return 0;
}