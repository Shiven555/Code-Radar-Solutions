def bubble_sort(arr):
    n = len(arr)
    # Loop through the array multiple times
    for i in range(n):
        # Traverse through the unsorted part of the array
        for j in range(0, n - i - 1):
            # Swap if the element found is greater than the next element
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

# Example usage:
my_array = [64, 34, 25, 12, 22, 11, 90]
sorted_array = bubble_sort(my_array)
print("Sorted array:", sorted_array)
