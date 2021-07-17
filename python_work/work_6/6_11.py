cities = {
	'beijing':{
		'country':'china',
		'population':10000000,
		'fact':'a big city',
		},
	'london':{
		'country':'UK',
		'population':5000000,
		'fact':'a long historical city',
		},
	'newyork':{
		'country':'USA',
		'population':8000000,
		'fact':'a modern city',
		}
	}
for city,info in cities.items():
	print(city+': ')
	print("it's belong to "+info['country'])
	print("it has "+str(info['population'])+' people')
	print("it's "+info['fact'])
	print()
