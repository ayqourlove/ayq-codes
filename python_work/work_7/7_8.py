sandwich_orders = ['aaa','bbb','ccc']
finished_sandwiches = []
while sandwich_orders:
	finished_sandwiches.append(sandwich_orders.pop())
finished_sandwiches.reverse()
for sandwich in finished_sandwiches:
	print(sandwich)
