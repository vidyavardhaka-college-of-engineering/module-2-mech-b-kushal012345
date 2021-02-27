<b>INTRODUCTION TO ARRAYS<b>



An array is an ordered sequence of finite data items of the same data type and that shares a common name. The common name is the array name and each individual data item is known as an element of array.

The elements of the array are stored in contiguous memory locations starting from a memory location allocated/stored in the array variable.

For example, an array of size 10 (int arr[10];) can be visualized as shown below.

arr[0]	arr[1]	arr[2]	arr[3]	arr[4]	arr[5]	arr[6]	arr[7]	arr[8]	arr[9]

An element of an array is retrieved/accessed using its index. For example, the value stored in the first position can be printed using the below code:

printf("%d", arr[0]); // remember that array's index starts from 0 and not 1
 
A one-dimensional array can be used to represent a list of data elements and is also known as a vector.

A two-dimensional array is used to represent a table of data items consisting of rows and columns and is also known as a matrix.
 
The syntax for declaring a one-dimensional array is given below:
data_type arrayname[size]; //a single array is declared

Here, data_type refers to the data type of the elements in the array and it can be a primitive data type.
arrayname1, arrayname2, .....etc refers to the identifiers which represent the array names.
size is an integer expression representing total number of elements in the array.

Let us consider an example
int num[5];
The above one-dimensional array declaration defines an integer array by name num of size 5, meaning it represents a block of 5 consecutive storage locations that store int values.

Here each element in the array can be accessed by num[0], num[1], num[2], num[3], num[4], where 0, 1, 2, 3, 4 represent the subscripts or indices of the respective elements in the array.
Each element in an array can be accessed by the name of the array followed by the subscript or directly by the address. The array variable holds the base address of that entire array.

A two-dimensional array can be initialized as int a[3][2] = {{20, 30}, {40, 50}, {60, 70}};. Here, the values within the inner braces are assigned as elements to each row.

If the number of values initialised for an array is less than the size mentioned, the missing elements are assigned to zero.

For example in int a[3][4] = {{1, 2}, {3, 4, 5}};, the elements 1 and 2 are stored in a[0][0], a[0][1] of the 0th row and elements 3, 4 and 5 are stored in a[1][0], a[1][1] and a[1][2] of the 1st row respectively. All the other elements are initialised to zero.

In the example, int a[3][4] = {1, 2, 3, 4, 5};, the values or elements 1, 2, 3, 4 and 5 are assigned starting from left-side to a[0][0], a[0][1], a[0][2], a[0][3] and a[1][0] respectively.


