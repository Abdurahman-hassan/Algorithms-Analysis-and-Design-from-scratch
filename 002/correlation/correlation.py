import math

arr_x = []
arr_y = []
a = []
b = []
i = av1 = av2 = m = pow_a = pow_b = 0

# read the size of the array
size = int(input("Enter the size of the array: "))

for i in range(size):
    arr_x.append(int(input("Enter the value of X: ")))
    arr_y.append(int(input("Enter the value of Y: ")))
    av1 += arr_x[i]
    av2 += arr_y[i]

av1 /= size
av2 /= size

for i in range(size):
    a.append(arr_x[i] - av1)
    b.append(arr_y[i] - av2)
    pow_a += pow(a[i], 2)
    pow_b += pow(b[i], 2)
    m += a[i] * b[i]

m /= math.sqrt(pow_a * pow_b)
print("The correlation is: ", m)