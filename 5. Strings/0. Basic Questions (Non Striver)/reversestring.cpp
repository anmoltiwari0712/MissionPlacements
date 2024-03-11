#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<"String Before Reversing is: "<<endl;
    cout<<str<<endl;
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<"String after Reversing is: "<<endl;
    cout<<str;
}
