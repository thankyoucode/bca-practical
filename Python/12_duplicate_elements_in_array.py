from array import array as arr


# only using array data structure
def find_duplicate(item_array: arr, array_type: str):
    duplicate_items = arr(array_type, [])
    while len(item_array) > 0:
        item = item_array.pop()
        if item in duplicate_items:
            continue
        if item in item_array:
            duplicate_items.append(item)
    return duplicate_items


my_array = arr("i", [10, 20, 30, 40, 20, 30, 234, 33, 423, 22, 33, 423, 443])

print(find_duplicate(my_array, "i"))
