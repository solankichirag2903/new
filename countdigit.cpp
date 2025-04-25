#include<iostream>
using namespace std;

int CountDigit(int num){
    if(num==0){
        return 1;
    }
    int count=0;
    
    while(num!=0){
        count++;
        num/=10;
        
    }
    return count;
}

int main(){
    int num;
    cin>>num;
    
    cout<<CountDigit(num)<<endl;
    
    return 0;
    
}
