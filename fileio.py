# # # # # python can be used to perform operation on a data(read and write)

# # # # # types of files 


# # # # # text files-.txt .docx etc 
# # # # # binary Files-.png, jpeg etc 

# # # # open read & close File 
# # # # we have to open file before reading or writing 
# # # # f=("file-name ", 'mode')
# # # # by default read 

# # # f=open("sum.py","r")
# # # #ata=f.read() #read according to the character
# # # #read the entire file 
# # # data=f.readline()
# # # #read the line 
# # # print(data)
# # # f.close()

# # #writing to a file 
# # f=open("sum.py","a")
# # f.write("\n my name is maheshwor dhakal")
# # #if file doesn't exist the python make us by default 
# f=open("factorial.py","a+")
# f.write("\n my name is maheshowr dhakal : \n")
# data=f.read()
# print(data)
# f.close()


#with syntax

with open("me.txt","a+") as f:
    f.write("\n append successfuly")
    data=f.read()
    print(data)


    #pip install package for instal the package 