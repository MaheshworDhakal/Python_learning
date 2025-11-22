# #def function_name(argument)
# def calculate(int,float) :
#     sum=a+b
#     print(sum)
# a=10
# b=15.566666
# calculate(a,b)

# def print_myname():
#     print("my name is maheshwor dhakal:\n")

# for i in range(1,10):
#      out=print_myname()
#      print(out)




#average of three numbers 
def average(num,SIZE):
    total=0
    for i in range(0,SIZE):
        total+=num[i]


    average=total/SIZE
    print("the avereage of the number is : ",average)



SIZE=int(input("enter the how many number you want to enter:"))
num=[]
for i in range(0,SIZE):
    number=int((input(f"enter the number {i+1} :")))
    num.append(number)
    print("you entered ",num)

average(num,SIZE)
#end="what we what to set by default\n"





