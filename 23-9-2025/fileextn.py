a = input("enter a file name (eg: abc.png)")
for i in a[::-1]:
    if i==".":
        print(a[a.index("."):])
