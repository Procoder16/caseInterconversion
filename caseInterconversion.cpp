#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;

    cout<<"ENTER THE STRING:";
    cin>>str;

    int n = str.size();

    for(int i=0; i<n; i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    cout<<"\nTRANSFORMED STRING:"<<str<<endl;

    return 0;
}