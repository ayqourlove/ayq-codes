while True:
	a = input("Enter the first number:( 'q' to quit): ")
	if a == 'q':
		break
	try:
		a = int(a)
	except ValueError:
		print("It's not a number! Try again.")
		continue
	print(a)
