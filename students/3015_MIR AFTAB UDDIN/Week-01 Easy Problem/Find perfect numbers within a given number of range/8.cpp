#include<iostream>
using namespace std;

int main(){

    int firstrange, lastrange;

    cout<< "Enter the starting range : ";
    cin>> firstrange;
    cout<<"Enter the ending Range : ";
    cin >> lastrange;

    cout<< "The Perfect numbers  wihtin the given Range : ";
    for ( int i = firstrange; i < lastrange ; i++){
        int divisor= 1;
        int sum = 0;
        while (divisor < i ){
            if (i%divisor ==0 ){
                sum = sum + divisor;
            }

             divisor++;
        } 
        if (sum==i)
        cout<< i << " ";
       
    }
    



    return 0;
}