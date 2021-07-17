sandwich_orders = ['aaa','pastrami','bbb','ccc','pastrami','pastrami']
print("Sorry, the pastrami have sold out.")
while 'pastrami' in sandwich_orders:
	sandwich_orders.remove('pastrami')
finished_sandwiches = []
while sandwich_orders:
	finished_sandwiches.append(sandwich_orders.pop())
finished_sandwiches.reverse()
for sandwich in finished_sandwiches:
	print(sandwich)
