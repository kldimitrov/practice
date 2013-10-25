#include<iostream>
using namespace std;

int sum=0;

bool isEven(int number){
  return (number%2)==0;
}

void findSum(){
  int i=1,j=2;
  cout<<i<<" "<<j<<" ";
  sum+=2;
  int temp;
  while(temp<4000000)
  { 
    temp=i+j;
    i=j;
    j=temp;
    if(isEven(temp)){
      sum+=temp;
    }
    cout<<temp<<" ";  
  }
}
int main(){
  cout<<""; 

  findSum();
  cout<<endl<<sum;
  return 0;
}
