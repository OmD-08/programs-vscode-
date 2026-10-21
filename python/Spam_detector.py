spam1 = "buy" 
spam2 = "click this" 
spam3 = "make a lot of money" 

message = input("Enter your message : ") 

if (spam1 in message.lower() or spam2 in message.lower() or spam3 in message.lower()): 
    print("It is a spam !") 
else: 
    print("It is not a spam !")
