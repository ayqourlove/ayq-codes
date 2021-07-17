info = {}
while True:
	name = input("What's your name?")
	place = input("If you couldvisit one place in the world, where would you go?")
	info[name] = place
	active = input("Another one?(yes/ no)")
	if active == 'no':
		break
print("\n---results---")
for name,place in info.items():
	print(name+" want to go "+place+'.')
