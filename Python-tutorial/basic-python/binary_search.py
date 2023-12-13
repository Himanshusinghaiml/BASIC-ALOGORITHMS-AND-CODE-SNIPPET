def binary(arr,key):
    last=len(arr)-1
    start=0
    while(start<=last):
        mid=start+(last-start)//2
        if(arr[mid]==key):
            return mid
        elif arr[mid]<key:
            start=mid+1
        else:
            last=mid-1
    return -1
            
list1=[5,10,15,20,25,30]
try: 
     key=int (input("enter the number "))
except:
      print("plx enter the correct value and run again ")
      exit()
    
ans=binary(list1,key)
if ans!=-1:
    print("element found at index : ",ans)
else:
    print("not element found ")
    