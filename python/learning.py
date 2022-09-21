import math
import random                       #import library "random"      library_>predefined code

def function_name():               #defining function called "function name" 
   
    variable1 = "string"            #creating a variable of data type string/collection of charectors called variable1 
    variable2 = 1                   #creating a variable of data type number/integer of charectors called variable2
    variable3 = input("text")       #variable3 created and value inpuet by user + prints prompt text
    variable4 = ["a","b","c"]       #variable4 is list of strings with 3 items a,b,c   List-> variable with multiple items 
    return variable4                #what the function will return when called, () optional

x = function_name()                 #calling function and storing in x
print(x)                            #printing value in x

dict = {"key" : "value", "key2" : x}             #defining 2 pair dictionary where a  key is asociated with a value----- key=value , key2=variable x
#---------------------------------------------------------------------------------------------------------------------------------------------------
print(dict)                                     #print dictionary as 'key_name' : 'value_name'
print(dict["key2"])                             #print value associated with key2
variable4 = ["a","b","c"]
y = random.choice(variable4)                    #y = random element from list variable4
print(y)                                        #print random number

def compare(x,y):                     #define function compare with two inputs x,y          
   
    if x>y:         
        return x
    elif x<y :                         # == mean check while = mean assign
        return y
    else :                             #if else ladder statement
        return "equal"
        
a=input("NUMBER 1")
b=input("number 2")
c= compare(a,b)                     #send a,b to x,y in defined function compare

print("name " + y)                  #print name *variable*
l=4
print(f"statement {l} statment")    #print variable + string using fstring  f"statement {variable_name}" 

type(y)                             
print(type(y))                      #print data type of variable y
print(type(y)==str)                 #print if data type of variable y is string
#or 
print(isinstance(y,str))         #print if data type of variable y is string
#data types   complex, bool, float, int, str, list, tuple, dict, set, range
x**2                                #exponential
x//2                                #floor division-divide and return integer part of the quotient
#binary operators  &,|,^,>>,<<,~
#is operator checks if two variables are equal
#in operator checks if a variable is in a list

#compare(x,y)
#ternary operator
#condition ? true : false    //////////return true if {condition is} true else  false
print("""text
l2
""")             #print text in multiple lines
def print_format(): 
    print('text'.upper())                 #print text in upper case without modfying original text
    print('text'.lower())                 #print text in lower case
    print('text'.capitalize())            #print text in capitalized case
    print('text'.title())                 #print text in title case
    print('text'.swapcase())              #print text in swap case
    print('text'.count('t'))              #print number of times 't' appears in text
    print('text'.find('t'))               #print index of first occurence of 't' in text
    print('text'.replace('t','T'))        #print text with 't' replaced with 'T'
    print('text'.split('t'))              #print list of substrings split at 't'
    print('text'.isalpha())               #print if text is alphabetic
    print('text'.isalnum())               #print if text is alphanumeric(character and number and not empty)
    print('text'.isdigit())               #print if text is a digit
    print('text'.startswith('t'))         #print if text starts with 't'
    print('text'.endswith('t'))           #print if text ends with 't'
    print('a'.join(['t','e','x','t']))      #print text joined with a
    print('text'.isidentifier())          #print if text is an identifier
    print(len('text'))                    #print length of text
    print('text'.index('t'))              #print index of first occurence of 't' in text
    print('text'.isprintable())           #print if text is printable
    print('text'.isspace())               #print if text is a space
    print('text'.endswith('t'))           #print if text ends with 't'
    print('text'.startswith('t'))         #print if text starts with 't'
    print("e" in "text")                  #print if 'e' is in 'text'
    print("text\!")                       #print text with ! (\special character))

strin = "text"
print(strin[0])                         #print first character of string

print(strin[1:3])                       #print characters from index 1 to 3
print(strin[1:])                        #print characters from index 1 to end
print(strin[:3])                        #print characters from index 0 to 3
print(strin[-1])                        #print last character of string
def math():
    #boolean     True, False (numbers are true except 0)(emoty stringd are false)
    o =1
    p= 2
    print( any([o,p]))                       #print if any of the values are true
    print( all([o,p]))                       #print if all of the values are true
    print( not o)                            #print if o is false

    compl = 1+2j                          #complex number (a+bj)
    y = complex(1,2)                        #complex number (a+bj)
    print(complex.real)                     #print real part of complex number
    print(complex.imag)                     #print imaginary part of complex number
    print(complex.conjugate())              #print conjugate of complex number

    abs(-1)                                 #absolute value of number
    pow(2,3)                                #power of number
    round(2.3)                              #round number
    round(2.3,1)                            #round number to 1 decimal place
    min(1,2,3)                              #minimum of numbers
    max(1,2,3)                              #maximum of numbers
    sum([1,2,3])                            #sum of numbers
    divmod(5,2)                             #quotient and remainder of division

from enum import Enum                        #import enum module
class Color(Enum):                           #define enum class   (enum class is a class with fixed set of values)
    RED = 1                                  #define enum values
    GREEN = 2
print(Color.RED.value)                             #print enum value
print(Color.RED.name)                              #print enum name
print(Color(1)).value                                    #print enum name from value
print(Color['RED'])                                #print enum value from name

print(list(state))                            #print list of enum values
print(list(state.__members__))                #print list of enum names
print(list(state.__members__.items()))        #print list of enum names and values
ptint(len(color))                             #print number of enum values
def lists():    
    list1 = [1,2,3,4,5,"string"]                   #define list
    list1.append(6)                                 #append 6 to list
    list1.insert(0,0)                               #insert 0 at index 0
    list1.extend([7,8,9])                           #extend list with [7,8,9]
    list1 += [10,11,12]                             #extend list with [10,11,12]
    list1.remove(0)                                 #remove 0 from list
    list1.pop(0)                                    #remove element at index 0 from list
    list1.clear()                                   #clear list
    list1.index(1)                                  #return index of 1 in list
    list1.count(1)                                  #return number of times 1 appears in list
    list1.sort()                                    #sort list (only works if all elements are of same type) [upper case letters are sorted before lower case letters]
    list1.sort(key=str.lower)                       #sort list ignoring case  [sorting modifies original list]
    list1.reverse()                                 #reverse list
    list1.copy = list2[:]                                    #copy list to list2
    list1 = list1 + [1,2,3]                         #concatenate list with [1,2,3]
    list1 = list1 * 2                               #concatenate list with itself
    print( 1 in list1)                            #print if 1 is in list
    print( list1[2])                              #print element at index 2
    list1[1:1] = [0,3]                               #insert [0,3] at index 1
    #work similar to strings

    numbers=[1,2,3,4,5,6,7,8,9,10]
    print(sorted(numbers ,key=str.lower))                              #return sorted list without modifying original list
    print(numbers)                                                    #print original list
    print(numbers.sort())                                             #sort list and return None




