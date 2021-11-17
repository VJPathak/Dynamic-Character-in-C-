l1 = [1, 2, 3, 4, 6, 7]
l2 = [5, 4, 3]
l3 = []

for i in l1:
   for j in l2:
      if i == j:
         l3.append(i)

print(l3)
print('#'*50)

import re
myStr = 'rucha pathak is working in xyz organization'
d1 = {}
l1 = []
st1 = myStr.split(' ')
for i in st1:
   print(i[0])
   if i[0] in i:
      #print(i)
      l1.append(i)
      print(l1)
      d1[i[0]] = l1
      l1.clear()

print(d1)
print('#'*50)

   
   
