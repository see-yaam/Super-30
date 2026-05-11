#include<bits/stdc++.h>
using namespace std;

int main(){

    int start,end;
    cin>>start>>end;
            int flag=0;

    for(int i=start; i<=end;i++){

        int sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }

        if(sum==i){
            cout<<i<<endl;
            flag++;
        }

    }
    if(flag==0){
        cout<<"we found nothing";
    }
}