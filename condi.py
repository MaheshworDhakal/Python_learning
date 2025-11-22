# conditional statement 
# if(condition):
#         statemenr1
# elif(conditio):
#         statement 2
# else:
#         statement
mark=int(input("enter your mark:\n"))
if(mark>90):
        print("you got excellent")
elif(mark>80):
        print("you have got the mark ",mark)
else:
        print("you are fail")
               
name=input("enter your name")
if(len(name)>10):
        print("your name is ",name)
elif(name.find('a')==2):
        print("yes you guss true ")
        