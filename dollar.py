s = input("enter a string :")
result = s[0] + s[1:].replace(s[0],'$')
print("output:",result)
