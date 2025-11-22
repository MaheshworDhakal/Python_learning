# # class base:
# #     name="Maheshwor"

# # s1=base()
# # print(s1.name)
     

# class student:
#     #default constructors
#     def __init__(cls):
#         pass
#     #paramertized constructors
#     def __init__(self,name): #complosary to write self
#         print("counstructor calledl:")
#         self.name=name
# s1=student("maheshwor")
# print(s1.name)



#obj attributes>class atributes  when same value

#first way
class student:
   @staticmethod
   def college():
      print("hello boys ")
   def __init__(self):
      
      self.__name=input("enter your namme :\n")
      self._mark1=int(input("enter the marks of first sub:\n"))
      self._mark2=int(input("enter the marks of second sub:\n"))
      self.mark3=int(input("enter the marks of third sub:\n"))
    
   def display(self):
      print("yor name is ",self.__name)
      print("the mark of the first sub is :",self._mark1)
      print("the mark of the second sub is :",self._mark2)
      print("the mark of the third sub is :",self.mark3)

      
s1=student()
s2=student()
# print("the details of frist student is \n\n\n")
# s1.display()
# print("the details of second studnet is\n\n\n")

# s2.display()
print(s2._student__name)#excessing private datameber 