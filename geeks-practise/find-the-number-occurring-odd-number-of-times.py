from sys import stdin

# http://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

def cus(x):
	x=x.strip()
	return int(x)

l=map(cus,stdin.readline().split(","))

ans=l[0]
for i in range(1,len(l)):
	ans=ans^l[i]
print ans
