age = 0
price = 0
message = "Please enter you age:\n(enter -1 to quit)\n"
while True:
	age  = int(input(message))
	if age == -1:
		break
	elif age <= 3:
		price = 0
	elif age <= 12:
		price = 10
	else :
		price = 15
	print("The price is "+str(price)+'$.\n')
