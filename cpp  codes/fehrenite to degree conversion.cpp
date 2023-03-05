#include<iostream>
using namespace std;

int main(){int t;
cout<<"Enter no of test cases";
cin>>t;
while (t--){
float temp_f,temp_d;
cout<<"Enter temprature in fahrenite"<<endl;
cin>>temp_f;

temp_d=(temp_f-32)*5/9;
cout<<temp_d<<endl;
}

return 0;

}

