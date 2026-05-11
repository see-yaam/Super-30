#include <iostream>
using namespace std;


int main(){
    int num,product=1;
    cout << "Enter a Number : ";
    cin >> num;

    while (num!=0){
        int rem=num%10;
         product= rem*product;
         num=num/10;
    }
    cout << "Product of digits : "<< product;
    return 0 ;

}
