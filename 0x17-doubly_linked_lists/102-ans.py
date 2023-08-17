#!/usr/bin/python3

for x in range(100, 1000):
    for y in range(100, 1000):
        tot = x * y
        toy = str(tot)
        yot = toy[::-1]
        if toy == yot:
            answer = toy
            first = x
            s = y

print(f"{answer} = {first} * {s}")
