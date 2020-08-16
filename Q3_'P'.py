# PROGRAMME TO FIND THE SUM OVER 1 + 1/2 + 1/3 .... TILL THE SUM DOES NOT CHANGE BY MORE THAN 0.001
# Assignment: 1
# Question: 3
sum = 0
num = int(input("Enter any positive integer: "))

if num < 0:
    print("Please enter a positive integer!")

elif num == 0:
    print("The sum is :", sum)

else:
    for i in range(1, num+1):
        z=i
        sum = sum + 1 / i
        diff = 1/i
        if diff < 0.001:
            print("The no. entered has exceeded the provided limit!")
        else:
            print(end="")
    print("The sum till " + str(z) + " is :", sum)