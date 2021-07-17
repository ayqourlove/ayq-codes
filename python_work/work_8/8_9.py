def show_magicians(names):
	for name in names:
		print(name.title())

def make_great(names):
	i = 0
	for name in names:
		name = 'the Great '+name
		names[i] = name
		i+=1
		
magicians = ['tom','jack','jean']
make_great(magicians)
show_magicians(magicians)
