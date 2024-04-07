def binary(key,arr):
    start=0
    last=len(arr)-1
    while(start<=last):
        mid=start+(last-start)//2
        if arr[mid]==key:
            return True
        elif arr[mid]<key:
            start=mid+1
        else:
            last=mid-1
    return False
                
arr=[15,20,25,30,35,40,45,50]
try:
    key=int(input("enter the number :-"))
except:
     print("please input right input here  ")
     exit()
if(binary(key,arr)):
    print("yes found element ")
else:
    print("not found")

