#include<iostream>
using namespace std;

bool dividedByThree(int temp){
  if(temp%3==0)
    return true;
  return false;  
}

bool dividedByFive(int temp){
  if(temp%5==0)
    return true;
  return false;
}

int main(){
  int sum=0;
  for(int i=0;i<1000;i++){
    if(dividedByFive(i)||dividedByThree(i))
      sum+=i;
  }
  cout<<sum;
  return 0;
}
