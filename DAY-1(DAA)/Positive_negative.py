#program to accept a number N and print whether it is positive, negative or zero
def posneg(n):
    if(n<0):
        print("negative")
    elif(n>0):
        print("positive")
    elif(n==0):
        print("zero")
n=int(input("Enter a number:"))
posneg(n)
