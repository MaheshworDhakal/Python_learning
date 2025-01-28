'''#TUPPLWS IN PYTHON 
#tupple=bhai of list 
#top[0]= not allowed to add the value which is main difference between the list and tupple '''
list=(1,2,3,4,5,6,7,8)
print(type(list))
print(list[0])
tupple=(1,)  #if there is no cooma then this behaves as intger 

print(tupple)
print(type(tupple))
print(list[2:5])


#Tupples methods 
#index method 
tupple=(1,4,5,2,1,6,3,2)
print(tupple.index(2))
print(tupple.index(1))
print(tupple.count(2))