from time import time
vector =[5, 9, 1, 7, 2, 4, 8, 6, 3] 

for i in range(len(vector)): 
    	
    for j in range(i + 1, len(vector)):
        
        if vector[j] < vector[i]: 
           vector[j], vector[i] = vector[i], vector[j] 
print vector            

