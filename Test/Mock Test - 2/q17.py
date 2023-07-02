# 17. Write a function that takes a list of numbers as input and returns a new list containing only the even numbers from the input list. Use list comprehension to solve this problem.

# Example:

# Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Output: [2, 4, 6, 8, 10]

def only_even_numbers(l):
    return [i for i in l if i % 2 == 0]


l = [12, 34, 46, 57, 45, 67, 78, 45, 57, 34]
print(l)

only_even = only_even_numbers(l)
print(only_even)
