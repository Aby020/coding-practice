def sort_dictionary(d, by='key', ascending=True):
    # Sort dictionary based on keys or values, in ascending or descending order
    if by == 'key':
        sorted_items = sorted(d.items(), reverse=not ascending)
    elif by == 'value':
        sorted_items = sorted(d.items(), key=lambda x: x[1], reverse=not ascending)
    return dict(sorted_items)

# User input for dictionary
n = int(input("Enter the number of items in the dictionary: "))
user_dict = {}
for _ in range(n):
    key = input("Enter key: ")
    value = int(input("Enter value: "))
    user_dict[key] = value 

# Sorting and displaying results
print("Original Dictionary:", user_dict)
print("Sorted by keys (ascending):", sort_dictionary(user_dict, by='key', ascending=True))
print("Sorted by keys (descending):", sort_dictionary(user_dict, by='key', ascending=False))
print("Sorted by values (ascending):", sort_dictionary(user_dict, by='value', ascending=True))
print("Sorted by values (descending):", sort_dictionary(user_dict, by='value', ascending=False))
