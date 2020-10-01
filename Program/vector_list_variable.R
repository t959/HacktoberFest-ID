#Create Variable in R Programming
A = 3
B = 5
C = A + B
D = C * A
E = D / B

# Int, Boolean, String, Vector Object
v1 = 23.5
v2 = TRUE
v3 = "apple"
print(v1)
#print v2v3

# DataType Vector Combine and List
vector1 = c(1,2,3,4)
vector2 = c("apple","manggo","banana","orange")
vector3 = c(1,2,3,"apple")

print(vector3)

list1 = list(1,2,3,"apple","manggo")
print(list1)

# Matrix ByRow, T mean focus to sequence row
matrix1 = matrix(c(1,2,3,4,5,6), nrow = 2, byrow=T)
matrix1


# Array dim c (col,row,many)
array1 = array(c("red", "blue", "yellow"), dim = c(2,2,4))
print(array1)
