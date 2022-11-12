import easystats

data = [1.0, 2.3, 1.4, 5.43, 3.07, -1.64]
data1 = [1, 2.0, 3]

# vec = easystats.vec_init("hello")
# print(vec)
mean = easystats.mean(data)
print(mean)
print(easystats.mean(data1))
