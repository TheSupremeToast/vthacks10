#!/bin/python3
import easystats

data = [1.0, 2.3, 1.4, 5.43, 3.07, -1.64]
data1 = [1, 2.0, 3]
data2 = [1, 2, 3]

# test mean
print(easystats.mean(data))
print(easystats.mean(data1))
print(easystats.mean(data2))

# test variance
print(easystats.variance(data))
print(easystats.variance(data1))

# test standard deviation
print(easystats.stdev(data))
print(easystats.stdev(data1))

# test min/max
print(easystats.min(data))
print(easystats.min(data1))
print(easystats.max(data))
print(easystats.max(data1))

