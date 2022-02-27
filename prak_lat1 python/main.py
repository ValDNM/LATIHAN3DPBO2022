from Pc import *

# Deklarasi komponen PC
processor = Processor('Intel i5 6400', 150)
ram = Ram(16, 100)
disk = Disk('SSD', 512, 60)

pc = Pc(processor, ram, disk)

# Output
print(f'Processor      : {pc.get_processor().get_name()}')
print(f'Processor Price: {pc.get_processor().get_price()} USD')
print('----------------------------------')
print(f'RAM Capacity   : {pc.get_ram().get_capacity()} GB')
print(f'RAM Price      : {pc.get_ram().get_price()} USD')
print('----------------------------------')
print(f'Disk Type      : {pc.get_disk().get_type()}')
print(f'Disk Capacity  : {pc.get_disk().get_capacity()} GB')
print(f'Disk Price     : {pc.get_disk().get_price()} USD')
print('==================================')
print(f'Total Price    : {pc.get_total_price()} USD')