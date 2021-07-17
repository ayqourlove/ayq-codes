aiqi = {'name':'aiqi','animal':'dog','master':'ayq'}
biqi = {'name':'biqi','animal':'cat','master':'tom'}
buke = {'name':'buke','animal':'turtle','master':'jean'}
pets = [aiqi,biqi,buke]
for info in pets:
	print("For pet "+info['name']+":")
	print("the animal's type is "+ info['animal'])
	print("it's master is "+info['master'])
	print()
