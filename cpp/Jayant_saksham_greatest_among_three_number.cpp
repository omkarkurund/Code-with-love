#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter values a,b,c: ";
    cin>>a>>b>>c;
    
    int max=0;
    if(a>b){
        Max=a>c?a:max=c;
    }
    else{
        Max=b>c?b:c;
    }
    cout<<"Greatest number is "<<max<<endl;
    return 0;
}
