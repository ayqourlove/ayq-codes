def count_words(filename):
	try:
		with open(filename) as f_obj:
			contents = f_obj.read()
	except FileNotFoundError:
		pass
	else:
		words = contents.split()
		num_words = len(words)
		print("The file "+filename+" has about "+str(num_words)+" words.") 
filename = 'alice.txt'
count_words(filename)
