from sys import stdin

# http://www.geeksforgeeks.org/array-rotation/


t=int(stdin.readline().strip())
for i in range(0,t):
	n,d=map(int,stdin.readline().split())
	l=map(int,stdin.readline().split())
	d=d%n
	for x in l[d:]:
		print x,
	for x in l[:d]:
		print x,
	print ""
