#include<iostream>
using namespace std;
int main(){

    int start,end,i,j,sum;
    cout << " enter strating range : " ;
    cin >> start;
    cout << " enter ending range : ";
    cin >> end;
    cout << "perfect numbers between " << start << "and" << end << "are:\n";
    for(i=start;i<=end;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum= sum+j;
            }
        }
        if(sum==i)
        {

            cout << i << " ";
        }
    }





return 0;

}
