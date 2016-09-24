from time import time 	
lista = [5, 9, 1, 7, 2, 4, 8, 6, 3] 
for i in range(len(lista)):	
	tmp = lista[i]	
	j = i - 1	
	while j >= 0 and lista[j] > tmp: 
		lista[j+1] = lista[j]
		j -= 1	
		lista[j+1] = tmp
print lista 
