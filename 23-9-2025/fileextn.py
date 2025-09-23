a = input("enter a file name (eg: abc.png)")
b = a[::-1]
c = b.index(".")
a = b[:c]
print("Extension is :", a[::-1])
