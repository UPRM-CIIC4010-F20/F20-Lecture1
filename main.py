import math

side1 = 10
side2 = 10
side3 = 10

s = (side1 + side2 + side3) / 2.0

area = math.sqrt(s * (s- side1) * (s - side2) * (s - side3))

print(area)


