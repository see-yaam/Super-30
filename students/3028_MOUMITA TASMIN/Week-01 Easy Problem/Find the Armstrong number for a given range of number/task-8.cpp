#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int lower,upper,num,temp,digit,digits,sum;
    cout << "Enter lower limit : ";
    cin >> lower;
    cout << "ENter upper limit : ";
    cin >> upper;
    cout << "Armstrong numbers between " << lower << "and" << upper << "are:\n";
    for (num=lower ; num <=upper; num++)
    {
        temp=num;
        digits=0;
        sum=0;
        while(temp!=0)
        {
            digits++;
            temp=temp/10;
        }
        temp=num;

        while(temp !=0)
        {
            digit=temp%10;
            sum=sum+pow(digit,digits);
            temp = temp/10;
        }
        if(sum == num)
        {
            cout << num << " ";
        }
    }





    return 0;
}

