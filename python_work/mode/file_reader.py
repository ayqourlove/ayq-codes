with open(r'C:\Users\ayq\Desktop\python_work\mode\mode2\pi_million_digits.txt') as file_object:
	lines = file_object.readlines()
pi_string = ''
for line in lines:
	pi_string+= line.strip()
while True:
	birthday = input("Enter your birthday, in the form of mmddyy:")
	if birthday in pi_string:
		print("in the first million digits of pi!")
	else:
		print("Not in.")

