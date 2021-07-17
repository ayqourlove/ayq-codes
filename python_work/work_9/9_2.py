class User():
	def __init__(self,name1,name2,age):
		self.first_name = name1
		self.last_name = name2
		self.age = age
		self.login_attempts = 0
	def describe_user(self):
		print("user's name:  "+self.first_name+" "+self.last_name)
		print("user's age is "+str(self.age))
	def greet_user(self):
		print("Greetings! "+self.first_name+" "+self.last_name)
	def increment_login_attempts(self):
		self.login_attempts+=1
	def reset_login_attempts(self):
		self.login_attempts = 0


u1 = User('tom','smith',18)
u1.describe_user()
u1.greet_user()
u1.increment_login_attempts()
u1.increment_login_attempts()
print(u1.login_attempts)
u1.reset_login_attempts()
print(u1.login_attempts)
