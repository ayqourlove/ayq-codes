import unittest
from city_function import mix_info
class CityTestCase(unittest.TestCase):
	def test_city_country(self):
		full_ = mix_info('beijing','china')
		self.assertEqual(full_,'Beijing, China')
	def test_city_country_population(self):
		full_ = mix_info('beijing','china',5000000)
		self.assertEqual(full_,'Beijing, China-Population 5000000')
unittest.main()
