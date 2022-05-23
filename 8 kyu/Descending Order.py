#                   DESCRIPTION
# Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order.
# Essentially, rearrange the digits to create the highest possible number.

def descending_order(num):
    num_str = str(num)
    num_list = list(num_str)
    num_list.sort(reverse = True)
    result = "".join(num_list)
    return int(result)