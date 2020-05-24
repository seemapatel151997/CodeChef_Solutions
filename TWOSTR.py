T = int(input())
while T != 0:
	S1 = input()
	S2 = input()
	result = "Yes"

	length = len(S1)

	while length != 0:
		length -= 1
		if S1[length] != '?' and S2[length] != '?':
			if S1[length] == S2[length] and result != "No":
				result = "Yes"
			else:
				result = "No"
	print(result)
	T -= 1