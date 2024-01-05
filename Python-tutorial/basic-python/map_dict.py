# arr = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
arr=[2,7,11,15,15]
i = 1

while i < len(arr):
    if arr[i] == arr[i - 1]:
        arr.pop(i - 1)
    else:
        i += 1

d={}
for i in range(len(arr)):
    d[arr[i]]=i
print(d)
