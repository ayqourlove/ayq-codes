import unittest
from Employee import Employee
class TestEmployee(unittest.TestCase):
	def setUp(self):
		self.kkk = Employee('Tom','Smith',10000)
	def test_give_default_raise(self):
		salary = self.kkk.salary
		self.kkk.give_raise()
		self.assertEqual(salary+5000,self.kkk.salary)
	def test_give_custom_raise(self):
		salary = self.kkk.salary
		_give = 6000
		self.kkk.give_raise(_give)
		self.assertEqual(salary+_give,self.kkk.salary)
unittest.main()
