#!/usr/bin/python

import math

def isPrime(number):
  temp = int(math.sqrt(number))
  for i in range(2, temp):
    if(number%i==0):
      return False
  return True

sumValue=5
for j in range(5,2000000): 
  if(isPrime(j)):
    sumValue=j+sumValue
print "The sum is :"
print sumValue 
