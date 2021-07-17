print("The programe can get the resul sum of tow numbers.")
while True:
	a = input("Enter the first number:( 'q' to quit): ")
	if a == 'q':
		break
	try:
		a = int(a)
	except ValueError:
		print("It's not a number! Try again.")
		continue
	b = input("Enter the second number:( 'q' to quit):")
	if b == 'q':
		break
	try:
		b = int(b)
	except ValueError:
		print("It's not a number! Try again.")
		continue
	print(a+b)
