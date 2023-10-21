#include<iostream>
using namespace std;
// Term in fibonnacci series at desired position finder
int fibonacci(int n) {
  if (n <= 1){
    return 1;
  }
  return fibonacci(n-2) + fibonacci(n-1);
}
int main (){
  int a;
  cout << "Enter a number: ";
  cin>>a;
  cout<<"\nThe term in fibonnacci sequence at postion "<<a<<" is "<<fibonacci(a)<<endl;
