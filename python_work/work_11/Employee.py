class Employee():
	def __init__(self, fname, lname, salary):
		self.fname = fname
		self.lanme = lname
		self.salary = salary
	def give_raise(self,add=5000):
		self.salary+=add
	
