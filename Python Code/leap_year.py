year=int(input("Enter the Year: "))
if year%4 == 0 and year%100 != 0 or year%400 == 0:
    print("The year is leap year")
else:
    print("The year is not leap year")
    
