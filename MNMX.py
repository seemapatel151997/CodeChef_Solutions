T = int(input())
while T != 0:
	cost = 0
	N = int(input())
	a = []
	b = list(map(int, input().split()))
	print((N-1)*min(b))
	T -= 1