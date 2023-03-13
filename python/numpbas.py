import numpy as np

lists = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    #using numpy faster than using list as it only stores the values while list stores type and values
    #numpy by default uses 32 bit integers and 64 bit floats . lists use 64 bit integers and 64 bit floats 
    #list can store any type of data while numpy can only store one type of data
    #numpy stores in contiguous memory while list stores in non contiguous memory

a = np.zeros((3, 3))   
b = np.ones((3, 3))    
c = np.full((3, 3), 7) 
d = np.eye(3)         
e = np.random.random((3, 3)) 
f= np.linspace(0, 1, 6) 
print(f)
