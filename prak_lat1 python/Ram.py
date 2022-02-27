class Ram:

	# Constructor
	def __init__(self, capacity, price):
		self.capacity = capacity
		self.price = price

	# Set & Get methods
	def set_capacity(self, capacity):
		self.capacity = capacity

	def set_price(self, price):
		self.price = price

	def get_capacity(self):
		return self.capacity

	def get_price(self):
		return self.price