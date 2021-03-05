def insertion_sort(arr):
    length = len(arr)

    # sort sub arr individually
    for i in range(1, length):
        val = arr[i]

        # insert the sub arr
        for j in range(i-1, -1, -1):
            
            # insert at position where is hole
            if val<arr[j]:
                arr[j+1] = arr[j]
                if j == 0:
                    arr[j] = val
            else:
                arr[j+1] = val
                break
    
    return arr

print(insertion_sort([6, 5, 1, 3, 8, 7, 2, 4]))