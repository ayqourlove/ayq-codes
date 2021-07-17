numbers = range(1,10)
for number in numbers:
	if number > 3:
		print(str(number)+"th")
	elif number == 3:
		print(str(number)+'rd')
	elif number == 2:
		print(str(number)+'nd')
	else:
		print(str(number)+'st')
		
