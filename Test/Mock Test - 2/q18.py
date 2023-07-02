# 18. Implement a decorator function called ‘timer’ that measures the execution time of a function. The ‘timer’ decorator should print the time taken by the decorated function to execute. Use the ‘time’ module in Python to calculate the execution time.

# Example:

# import time

# @timer
# def my_function():
#     # Function code goes here
#     time.sleep(2)

# my_function()

# Output:
# "Execution time: 2.00123 seconds"

import time


def timer(org_func):
    def wrapper(*args, **kwargs):
        start = time.time()

        result = org_func(*args, **kwargs)

        end = time.time()

        print("Execution time : ", end-start ,"seconds")

        return result
    return wrapper


@timer
def my_function():
    time.sleep(2)


my_function()
