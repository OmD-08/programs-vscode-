n = int(input("Enter the number of columns : "))

for i in range(1,n+1): # (n+1) because the range is from 1 to n-1  
    print(" "* (n-i),end=" ") # This prints the (n-i) space before the stars 
    print("*"* (2*i-1)) # (2n-1) because the no of stars we want is odd

# Here the use of "end = "" " is to prevent the print function from giving new line