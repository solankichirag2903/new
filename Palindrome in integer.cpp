#include<iostream>
using namespace std;

bool ispalindrome(int num){
    int original = num;
    int reversed =0;
    
    while(num !=0){
        int digit =num%10;
        reversed = reversed * 10 + digit;
        num/=10;
        
        
    }
    return original==reversed;
}

int main(){
    int num;
    cin>>num;
    
    if(ispalindrome(num)){
        cout<<"True"<<endl;
        
    }
    else{
        cout<<"False"<<endl;
    }
    
    return 0;
}
