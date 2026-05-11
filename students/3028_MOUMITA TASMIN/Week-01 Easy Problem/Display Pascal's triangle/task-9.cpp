#include<iostream>
using namespace std;
int main (){
 int rows,cef=1;
 cout << "enter number of row : ";
 cin >> rows;
 cout << "\n pascal's tringle:\n ";
 for(int i=0;i<rows;i++)
 {
     cef=1;
     for(int space=1;space <=rows-i;space++){
        cout << " ";
     }
     for(int j=0;j<=i;j++){
        if(j==0|| i==0)
            cef=1;
        else
            cef = cef*(i-j+1)/j;
        cout << cef << " ";
    }
    cout << endl;
 }
return 0;
}
