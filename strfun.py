str = "my name is"

# Check if the string ends with 's'
print(str.endswith("s"))  # Output: True

# Capitalize the first letter of the string (temporary change)
print(str.capitalize())  # Output: "My name is"

# Capitalize the first letter of the string (permanent change)
str = str.capitalize()
print(str)  # Output: "My name is"

# Replace all occurrences of 'm' with 'a'
str = str.replace("m", "a")
print(str)  # Output: "ay nae is"

# Find the first occurrence of 'name'
index = str.find("name")
print(index)  # Output: 3

# Count the number of occurrences of 'a'
count = str.count('a')
print(count)  # Output: 2
str2="maheshwor dhakal"
print(len(str2))
str3="dfbds ffd$sdfsdf $"
print(str3.find("$"))
str4=input("ehter your name :")
print("the length of string is ",len(str4))
#hameke deyeko proper spacelike tab is called indentation which is imprtant in python
