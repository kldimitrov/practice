#!/usr/bin/python

def sumOfSquares():
  sum=0
  for i in range(1,101):
    sum=sum+i*i
  return sum

def totalSum():
  total=0
  for i in range(1,101):
    total=total+i
  total=total*total
  return total
  
print sumOfSquares()
print " sumOfSquares is "
print totalSum()
answer= totalSum()-sumOfSquares()
print "Answer:"
print answer
