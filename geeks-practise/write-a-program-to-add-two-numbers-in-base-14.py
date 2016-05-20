from sys import stdin

# http://www.geeksforgeeks.org/write-a-program-to-add-two-numbers-in-base-14/

def convert(k):
	s=''
	while k:
		c=k%14
		if c>9:
			c=chr(65+c-10)
		else:
			c=str(c)
		s=s+c
		k=k/14
	return s[::-1]


k1=stdin.readline().strip()
k2=stdin.readline().strip()
k1=int(k1,14)
k2=int(k2,14)
ans=k1+k2
ans=convert(ans)
print ans
