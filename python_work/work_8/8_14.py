def make_car(_type,manufacturer, **get_info):
	info = {}
	info['type'] = _type
	info['manufacturer'] = manufacturer
	for key,value in get_info.items():
		info[key] = value
	return info
car = make_car('falali','German',color='blue', tow_package = True)
print(car)
