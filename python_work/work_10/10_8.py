def read_file(filename):
	try:
		with open (filename) as f_obj:
			contents = f_obj.read()
	except FileNotFoundError:
		pass
	else:
		print(contents.strip())

files = ['dogs.txt','cats.txt']
for _file in files:
	read_file(_file)
	print()		
