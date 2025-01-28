'''#wap to ask the user to enter names of their 3 favorite movies and store it ina liast 
movie1=input("enter the first movie name ")
movie2=input("enter the second movie name ")
movies =input("enter the third movie name ")
movie_list=[movie1,movie2,movies]
print(movie_list)'''
#wap to check if a  list contian a palindrome of element or not 
movie=[]
movie.append(input("enter the string "))
movie.append(input("enter the string "))
movie.append(input("enter the string "))
movie.append(input("enter the string "))
movie.append(input("enter the string "))
print(movie)
list1=movie.copy()
movie.reverse()
if(list1==movie):
 print("the number is palindrome ")
else:
  print("non palindrome ")
