def read_file(filename):
	try:
		with open (filename) as f_obj:
			contents = f_obj.read()
	except FileNotFoundError:
		print("The file "+filename+" didn't fonud!")
	else:
		print(contents.strip())

files = ['dogs.txt','cats.txt']
for _file in files:
	read_file(_file)
	print()		
