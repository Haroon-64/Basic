set = {1,2,3}
set2 = {3,4,5}
def function1():
    print(set | set2)


   
mapl=[1,2,3,4,5]

dour = map(lambda x : x*2,mapl)                           #apply function to each item dou
print(list(dour))                             #print result
filterl = filter(lambda x : x%3==0,mapl) 
print(list(filterl))                          #print result




def decorator_function(original_function): 
    def before():  
        print('wrapper executed this before {}'.format(original_function.__name__))  
        return original_function()
    return before

@decorator_function                           #add decorator to function

def display():
    print('display function ran')
display()


def add(x,y,z=0):                                   #default value for z
    return x+y+z
print(add(1,2))
print(add(1,2,3))