#include<iostream>
using namespace std;

unsigned long long best=1;
  bool isPrime(unsigned long long num){
  unsigned long long temp=num/2;
  for(unsigned long long i=2; i<=temp;i++){
    if(num%i==0)
      return false;
  }
  return true;
}


long findGreatestDivider(unsigned long long num){
  unsigned long long temp=num/2;
  for(unsigned long long i=temp;i>2;i--){
    if(num%i==0){
      if(isPrime(i))
      {
          best=i;
          return best;
      }
    }
  }
  return best;
}

int main(){
  unsigned long long number=600851475143; 
 // unsigned long long number=  600851475;
  cout<<findGreatestDivider(number);
  return 0;
}
