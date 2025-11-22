# # # # # #loop in python
# # # # # while loops
# # # # # while condition :
# # # # #     #somework
# # # # a=0
# # # # while a<5:
# # # #     print("my name is maheshwor :")
# # # #     a=a+1
# # # #     print(type(a))

# # # # print(a)   


# # # num1=1
# # # while num1<=100 :
# # #     print(num1)
# # #     num1=num1+1

# # # while num1>=1 :
# # #     print(num1)
# # #     num1=num1-1



# # #     #multiplation
# # # n=3
# # # i=1
# # # while i<10 :

# # #     print(n*i)
# # #     i=i+1
# # num=[1,4,9,16,25,36,49.64,100]
# # i=0
# # x=int(input("enter the number you want to serach"))
# # while i<len(num):
# #     print(num[i])
# #     i=i+1

# #     i=i+1
# num=[1,4,9,16,25,36,49.64,100]
# i=0
# x=int(input("enter the number you want to serach"))
# while i<len(num):
#     if(x==num[i]):
#         print("the number ",x,"is found at ",i)
#     i=i+1



# #break nad continue
# break is used to stop the loop 

# i=1
# while i<=6:
#     print(i)
#     i=i+1
#     if(i==3):
#         break;
# print(i)
#continue remove  the currentr itearation  and continue the loop
i=1
while i<=6:
   
    i=i+1
    if(i==3):
        continue;
    print(i)