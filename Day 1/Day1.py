with open('day1.dat') as file:
    data = [i for i in file.read().strip().split("\n")]

max = 0
max2 = 0
max3 = 0
count = 0

for item in data:
    if item == '\n' or item == '':
         count = 0
    else:
         num = int(item)
         count += num

    if count > max:
         max = count
    elif count < max and count > max2:
         max2 = count
    elif count < max2 and count > max3:
         max3 = count
print(max + max2 + max3)
