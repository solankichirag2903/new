#include<iostream>
using namespace std;
void travereseinteger(int no){
    while(no !=0){
        int digit = no%10;
        cout<<digit;
        no/=10;
        
    }
    cout<<endl;
}

int main(){
    
    int num;
    cin>>num;
    travereseinteger(num);
    
}
