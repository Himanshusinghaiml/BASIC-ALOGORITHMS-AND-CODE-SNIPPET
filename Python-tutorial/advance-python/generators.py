def my_generator():
    for i in range(10):
        yield i
    
a=my_generator()
print(next(a))
print(next(a))
print(next(a))
'''   Generators are lazy and produce values on demand, so they are often used in
situations where you don't want to generate all values at once but rather one at a time.'''
# for i in a:
#     print(i) 