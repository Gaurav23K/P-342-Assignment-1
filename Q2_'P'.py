# PROGRAMME TO FIND FACTORIAL OF A GIVEN NUMBER
# Assignment: 1
# Question: 2
num=int(input("Enter the number:"))
x=num
fac=1
if num<0:
    print("Invalid no.! \n", " Please enter a positive number.")
else:
    while num>0:
        fac = fac * num
        num -= 1
    print(x,"factorial is:",fac)