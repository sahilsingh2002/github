def quicksort(arr,left,right):
    if left<right:
        partition_pos=partition(arr,left,right)
        quicksort(arr,left,partition_pos-1)
        quicksort(arr,partition_pos+1,right)


def partition(arr,left,right):
    i=left
    j=right-1
    pivot=arr[right]

    while i<j:
        while i<right and arr[i]<pivot:
            i+=1

        while j>left and arr[j]>=pivot:
            j-=1

        if i<j:
            arr[i],arr[j]=arr[j],arr[i]

        if arr[i]>pivot:
            arr[i],arr[right]=arr[right],arr[i]

    return i

List=[2,3,4,5,1,1,1,2,3,2,1]
quicksort(List,0,len(List)-1)
print(List)

