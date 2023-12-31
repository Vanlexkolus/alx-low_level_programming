#!/usr/bin/python3
'''
Write a function that prints x elements of a list.
where: 
    Prototype: def safe_print_list(my_list=[], x=0):
my_list can contain any type (integer, string, etc.)
All elements must be printed on the same line followed by a new line.
x represents the number of elements to print
x can be bigger than the length of my_list
Returns the real number of elements printed
You have to use try: / except:
You are not allowed to import any module
You are not allowed to use len()
'''
def safe_print_list(my_list=[], x=0):
    try:
        x = int(x)
    except ValueError as valError:
        print(valError)
        return 0
    count = 0
    try:
        for i in range(x):
            print(my_list[i], end=" ")
            count = count + 1
    except IndexError as IndError:
        print(end=" ")
    return count

