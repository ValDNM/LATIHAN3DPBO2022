class Processor:

	# Constructor
	def __init__(self, name, price):
		self.name = name
		self.price = price

	# Set & Get methods
	def set_name(self, name):
		self.name = name


	def set_price(self, price):
		self.price = price


	def get_name(self):
		return self.name


	def get_price(self):
		return self.price