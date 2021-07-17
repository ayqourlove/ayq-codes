def make_album(sname,aname,amount = ''):
	info = {'sname': sname,'aname': aname}
	if amount:
		info['amount'] = amount
	return info
while True:
	sname = input("Input singer's name:\n('q' to quit)\n")
	if sname == 'q':
		break
	aname = input("Input album's name:\n('q' to quit)\n")
	if aname == 'q':
		break
	k = make_album(sname,aname)
	print(k)
