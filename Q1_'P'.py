# PROGRAMME TO ADD NUMBERS FROM 1 TO A GIVEN NUMBER
# Assignment: 1
# Question: 1
num=int(input("Enter the number: "))
z=0
if num < 0:
    print("Please enter a positive number.")
else:
    for i in range(num+1):
        z = z + i
    print("The summation till", num, "is ", z)