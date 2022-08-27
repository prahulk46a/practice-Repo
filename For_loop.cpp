//code for sum of first n natural no.
#include<iostream>
using namespace std;
int main(){
  int n,sum;
  sum=0;
  cout<<"Enter Number"<<endl;
  cin>>n;
  
  for(int i=0;i<=n;i++){
    sum+=i;
  }
  cout<<"sum of First n Natural No is:"<<sum<<endl;
}
