from Processor import *
from Ram import *
from Disk import *

class Pc:
	# Constructor
	def __init__(self, processor, ram, disk):
		self.processor = processor
		self.ram = ram
		self.disk = disk
		self.totalPrice = processor.get_price() + ram.get_price() + disk.get_price()

	# Set & Get methods
	def set_processor(self, processor):
		self.processor = processor

	def set_ram(self, ram):
		self.ram = ram

	def set_disk(self, disk):
		self.disk = disk

	def set_total_price(self):
		self.totalPrice = processor.get_price() + ram.get_price() + disk.get_price()

	def get_processor(self):
		return self.processor
	
	def get_ram(self):
		return self.ram

	def get_disk(self):
		return self.disk

	def get_total_price(self):
		return self.totalPrice
		