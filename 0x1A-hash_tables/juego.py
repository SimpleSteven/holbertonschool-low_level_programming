import random

list1 = [random.randint(1, 6) for num in range(1, 6)]
list2 = [random.randint(1, 6) for num in range(1, 6)]
spaces = len(list1) - 5
print(f"{list1}{' ' * (150 + spaces)}{list2}")
