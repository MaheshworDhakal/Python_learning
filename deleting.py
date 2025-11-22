# # # # import os
# # # # os.remove("me.txt")
# # # with open("practic.txt","w") as f:
# # #     f.write("hy everyone \n whats up ")
# # #     f.write ("ok python")

# # with open("practic.txt","r") as f:
     
# #      data=f.read()
# #      newdata= data.replace(" whats ","java ")
# #      print(newdata)


# def checkforworld():
#    with open("practic.txt","r") as f:
#      data=f.read()
#      word="ok"
#      if(data.find(word)!=-1):
#          print(f"{word} is found ")
#      else:
#         print(f"{word} is not found")
# checkforworld()
# def checkline():
#    word="ok"
#    data=True
#    line_no=1
#    with open("practic.txt","r")as f:
#     while data:
#          data=f.readline()
#          if(word in data):
#             print(line_no)
#          else:
#             line_no+=1
#     return -1
   
   
# checkline()

with open("practic.txt","r") as f:
    data=f.read()
    print(data)
    count=0
    # num=""
    # for i in range(0,len(data)):
    #     if(data[i]==","):
    #         print(num,end=" ")
    #         num=""
    #     else:
    #         num+=data[i]
    nums=data.split(",")
    for val in nums:
        if (int(val)%2==0):
            count+=1

print(count)
