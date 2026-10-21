subject1 = int(input("Enter the marks of 1st subjectect out of 100 : "))
subject2 = int(input("Enter the marks of 2nd subjectect out of 100 : "))
subject3 = int(input("Enter the marks of 3rd subjectect out of 100 : "))

total = (subject1 + subject2 + subject3)

percentage = (total/300)*100

print("\tYour totoal score : ",total)
print("\tYour percentage : ",percentage,"%")

if(percentage>40):
    if(subject1 > 33 and subject2 > 33 and subject3 > 33):
        print("\tYou are pass !")
else:
    print("\tYou are fail !")
