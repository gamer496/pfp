from sys import stdin

t=int(stdin.readline().strip())

# http://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


for i in range(0,t):
	n=stdin.readline()
	a=map(int,stdin.readline().split())
	for x in a[::-1]:
		print x,
	print ""
