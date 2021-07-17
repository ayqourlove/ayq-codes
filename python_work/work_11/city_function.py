def mix_info(city,country,population=''):
	if population:
		full_info = city+', '+country+'-population '+str(population)
	else:
		full_info = city+', '+country
	return full_info.title() 

print(mix_info('beijing','china',5000000))
