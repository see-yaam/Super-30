#include <iostream>
using namespace std;
int main(){
     
    int num,fac=1;
    cout<< "Enter a number for factorial: ";
    cin >> num ;


    for(int i = num ; i >= 1; i--){
        fac = fac * i;
    }


    cout << "Factorial of number "<< num <<" : " << fac;
    return 0;






}