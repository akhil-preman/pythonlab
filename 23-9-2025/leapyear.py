a = 2025
b = int(input("enter a year (above current year):"))
for i in range(a,b+1):
    if (i % 4==0 and i % 100!=0 or i % 400==0):
        print(i,"is a leap year")

