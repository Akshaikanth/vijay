n=int(input())
fact=1
if n>0:
	for i in range(1,n+1):
		fact=fact*i
	print(fact)
else:
	print("invalid")
