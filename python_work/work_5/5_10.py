current_users = ['a','b','c','d','e']
new_users = ['a','h','l','q','e']
for name in new_users:
	if name.lower() in current_users:
		print(name+" has been used.")
	else:
		print(name+" didn't used,")
