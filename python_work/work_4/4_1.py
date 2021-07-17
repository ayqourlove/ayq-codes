pizzas = ['a','b','c']
for pizza in pizzas:
	print("i like "+pizza+" pizza!")
print("I really love pizza!")
friend_pizzas = pizzas[:]
pizzas.append('x')
friend_pizzas.append('s')
for pizza in pizzas:
	print(pizza)
print()
for friend_pizza in friend_pizzas:
	print(friend_pizza)
