class Disk:
	# Constructor
	def __init__(self, dtype, capacity, price):
		self.dtype = dtype
		self.capacity = capacity
		self.price = price

	# Set & Get methods
	def set_type(self, dtype):
		self.dtype = dtype

	def set_capacity(self, capacity):
		self.capacity = capacity

	def set_price(self, price):
		self.price = price

	def get_type(self):
		return self.dtype

	def get_capacity(self):
		return self.capacity

	def get_price(self):
		return self.price