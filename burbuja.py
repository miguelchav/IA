from time import time 

lista = [5,9,1,2,6,3,4,8,7] 
for i in range (1, len(lista)):	
	for j in range (len(lista) - i):
		if (lista[j] > lista[j+1]):
			lista[j+1], lista[j] = lista[j], lista[j+1]	
print lista 


