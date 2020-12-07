# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

s=input()
s1,s2='',''
if(len(s)%2==0):
 s1=s[:len(s)//2] 
 s2=s[len(s)//2:]
else: 
 s1=s[:len(s)//2]
 s2=s[len(s)//2+1:]
l1=list(s1)
l2=list(s2)
l1.sort()
l2.sort()
s1=str(l1)
s2=str(l2)
if(s1==s2):
 print('YES')
else: 
 print('NO')
    
