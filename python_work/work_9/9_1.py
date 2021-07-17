class Restaurant():
	def __init__(self, name,_type):
		self.restaurant_name = name
		self.cuisine_type = _type
	def describe_restautant(self):
		print(self.restaurant_name+"  "+str(self.cuisine_type))
	def open_restaurant(self):
		print("The restaurant is open now!")

res = Restaurant('HAPPY',20)
res.describe_restautant()
res.open_restaurant()	
