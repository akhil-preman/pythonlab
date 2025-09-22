l1 = []
l2 = []
n1 = int(input("enter the length of list 1 :"))
for i in range(n1):
	a = int(input(f"enter element of index [{i}]"))
	l1.append(a)
	
n2 = int(input("enter the length of list 2 :"))
for j in range(n2):
	b = int(input(f"enter element of index [{j}]"))
	l2.append(b)
	
if len(l1) == len(l2)
	print("both lists are same length")
else:
	print("both lists are not same length")