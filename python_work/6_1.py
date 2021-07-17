fari_lang = {
	'jen': 'python',
	'sarah': 'c',
	'edward': 'ruby',
	'phil': 'python',
	}
names = ['jen','sarah','tom','jean']
for name in names:
	if name in fari_lang.keys():
		print(name.title()+", thank you!")
	else:
		print(name.title()+", please join us.")
