# defining search function
# arr is list, n is number to find
def search(arr, n, low, high):
    # giving upper and lower bound values
    if low <= high:
        mid = (low+high)//2                   # mid is the middle index

        if arr[mid] == n:
            return mid
        elif arr[mid] < n:
            search(arr, n, mid+1, high)
            return mid         # recursion is used
        else:
            search(arr, n, low, mid-1)
            return mid
    else:
        return -1
array = [3, 4, 5, 6, 7, 8, 9]
x = 5

result = search(array, x, 0, len(array)-1)

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")    
    
    