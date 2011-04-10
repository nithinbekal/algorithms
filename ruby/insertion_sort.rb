

def insertion_sort(list1)
  list = list1.dup
  for j in 1..(list.length-1)
    key = list[j]
    i = j-1
    while i >= 0 and list[i] > key
      list[i+1] = list[i]
      i = i-1
    end
    list[i+1] = key
  end
  list
end

input_list = [5,2,4,6,1,3]
sorted_list = insertion_sort(input_list)

p input_list
p sorted_list