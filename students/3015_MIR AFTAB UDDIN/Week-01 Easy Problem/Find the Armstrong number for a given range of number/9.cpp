#include <iostream>
#include <cmath>
using namespace std;


int main(){
 
    int start , end ;
    int num , temp, r , sum ,n;
    temp = 0;
    
    cout << "Starting Number: ";
    cin >> start;
    cout << "Ending Number: ";
    cin >> end;

    cout << "Armstrong Numbers are given range : ";
    
    for(num = start ; num <=end; num++){
        temp = num;
        sum = 0;
        n = 0;

        int temp2 = num ;

        while (temp2!=0)
        {
            temp2 = temp2 / 10;
            n++;
        }
        temp = num;

    while (temp != 0)
        {
            r = temp % 10 ;
            int power = 1;
            
            for(int i = 0; i < n; i++) {
                power = power * r;
            }
            sum = sum + power;
            temp = temp/10;

        }
        if(sum == num){
            cout << num <<" ";
        }
        
        
    }



    return 0;
}