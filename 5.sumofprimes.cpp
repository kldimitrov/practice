#include<iostream>
using namespace std;

int count=1;
int nnumber=1;

bool isPrime(int num){
  int tempNum=num;
  int i=2;
  for(i=2; i<num;i++){//important - the value
    if((num%i==0)){
      return false;
    }
  }
  nnumber=num;
  return true;
}

int main(){
  int current=2;
  for(int i=3; i<10000, count<10001;i++){

    current=i;
    if(isPrime(current)){
      count++; 
    }
  }
  cout<<"number is "<<count<<" last "<<nnumber;
	return 0;
}
