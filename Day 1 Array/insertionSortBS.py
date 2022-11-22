def _in_():
    n  = int(input("Enter the size of the array: "))
    arr = []
    for i in range(n):
        arr.append(int(input()))
    return arr

array = _in_()

print(array)

def _Binary_Search_(array,key,start,end):
    if start == end:
        if array[start] > key:
            return start
        else:
            return start+1
    
    if start > end:
        return start

    mid = start + end // 2

    if array[mid]<key:
        return _Binary_Search_(array, key, mid+1, end)
    elif array[mid] > key:
        return _Binary_Search_(array, key, start, mid-1)
    else:
        return mid


def insertionSortBs(array):
    for i in range(1,len(array)):
        key = array[i]
        j = _Binary_Search_(array,key,0,i-1)
        array = array[:j] + [key] + array[j:i] + array[i+1:]
    return array

print(insertionSortBs(array))


