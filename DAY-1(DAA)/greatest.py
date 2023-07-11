#program to accept two numbers and print the greater value of the two
def greatest(a,b):
    if(a>b):
        return a
    else:
        return b
a=int(input("Enter a number:"))
b=int(input("Enter a number:"))
print(greatest(a,b))
