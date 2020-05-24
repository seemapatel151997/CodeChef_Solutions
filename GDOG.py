for i in range(int(input())):
	x,y = input().split()
	x = int(x)
	y = int(y)
	max = 0
	for i in range(1, y+1):
		if x%i >= max:
			max = x%i
	print(max)
