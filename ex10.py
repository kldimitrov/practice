#!/usr/bin/python
def isPrime(number):
  for i in range(2,number/2):
    if(number%i==0):
      return False
  return True

sumValue=5
for j in range(4,2000000): 
  if(isPrime(j)):
    print j 
    sumValue=j+sumValue
print "The sum is :"
print sumValue 
