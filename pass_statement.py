# for i in range(5):
#     pass #use when thre is no code
# print("some task:\n")
# n=int(input("enter a number:\n"))
# sum=0
# print(type(sum))
# i=0
# while(i<=n):
#     sum=sum+i
#     i+=1

# print("the sum of the first : ",n," number is ",sum)

x=int(input("enter a number :\n"))
fact=1

for i in range(x,0,-1):
    fact*=i

print("factorial=",fact)