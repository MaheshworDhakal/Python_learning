# # Range function return  asequence of numbers starting from 
# # 0 by default and increment by 1 (by default ), and stop before specified number.FileNotFoundError
# print(range(5))
# seq=range(5)
# print(seq[0])
# print(seq[1])
# print(seq[2])
# print(seq[3])
# print(seq[4])
# for i in seq:
#     print(i)
#    # range(start?,stop,step)
# for i in range(2,2,4):
#     print(i)

for i in range(1,100,3):
    print(i)

for i in range(100,1,-1):
    print(i)
n=int(input("ente a number:\n"))
for i in range(1,11):
    print("the multiply of ",n,"with ",i,"is",n*i)