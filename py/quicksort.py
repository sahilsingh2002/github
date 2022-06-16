#defining quicksort
def quicksort(arr,left,right):
#arr is list given, left is leftmost index, right is rightmost index

    if left<right:
#always true statement
        parition_pos=partition(arr,left,right)     # another function defined later is partition

        quicksort(arr,left,parition_pos-1)          #quicksort on the left small list of pivot when pivot fixed to its position
        quicksort(arr,parition_pos+1,right)         #quicksort on the right small list of pivot when pivot fixed to its position



def partition(arr,left,right):
    #giving i and j values of indices of leftmost and the element which is left to the rightmost element(pivot)

    i=left
    j=right-1
    pivot=arr[right]            #giving pivot value of last element of list


    while i<j:                  #while i is in left of j

        while i<right and arr[i]<pivot:             #i is not at end and element at i is smaller than pivot, increase i
                                                    #this is because i stops at larger or equal value of pivot
            i+=1
        while j>left and arr[j]>=pivot:             #j is not at start and element at j is bigger or equal to pivot, decrease j
                                                    #this is because j stops at smaller value than pivot
            j-=1

        if i<j:                                     #when above while conditions don't work, meaning element at i >=pivot and element at j<pivot
                                                    #replace them
            arr[i],arr[j]=arr[j],arr[i]
        
    if arr[i]>pivot:                                #when element at i >pivot and i>j, or =j, so no conditions required here
        arr[i],arr[right]=arr[right],arr[i]   
    return i
        







List=[2,3,5,3,5,6,67,3,6,3,7,8,5,3,23,54,8,8,34,23,45,7,5,3,7,3]
quicksort(List,0,len(List)-1)
print(List)

#algorithm
   
# [1,4,6,3,8,7,12,14]

''' pivot is last element(12), i starts from 1st element and j from element left of 12
i goes forward until its element is > 12, j goes backward until its value<12
here, 14 is biggest, so i goes to 14 and j to 7
as i is in right of j, we interchange i and pivot so 12 is unchanged
now for small list, 7 is pivot, i goes same, j goes same,
i stops at 8, j at 3
i right of j so i and p change
for small one 7 is pivot, it is locked when we go again
for [1,4,6,3], 3 is pivot, i at 4 and j at 1
4 and 3 interchange
for [6,4], 6 and 4 interchange
list becomes sorted'''