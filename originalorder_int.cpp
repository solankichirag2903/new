#include<iostream>
#include<vector>
using namespace std;

void traversaldigit(int numb){
vector<int>digit;
while(numb!=0){
digit.push_back(numb%10);
numb/=10;
}

for(int i=digit.size()-1 ;i>=0;i--){
    cout<<digit[i]<<" ";
}
cout<<endl;
}

int main(){
    int num;
    cin>>num;
    
    traversaldigit(num);
}
