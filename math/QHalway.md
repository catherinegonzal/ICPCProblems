## Problem Q 
— limit 1 second
Halfway
A friend of yours has written a program that compares every pair of a list of items. With n items, it works as follows. First, it prints a 1, and it compares item 1 to items 2, 3, 4, . . . , n. It then prints a 2, and compares item 2 to items 3, 4, 5, . . . , n. It continues like that until every pair of items has been compared exactly once. If it compares item x to item y, it will not later compare item y to item x. Also, it does not compare any item to itself.

Your friend wants to know when his program is halfway done. For a program that makes an odd
number of total comparisons, this is when it is doing the middle comparison. For a program that makes an even number of total comparisons, this is when it is doing the first of the two middle comparisons.
What will the last number printed be when the program is halfway done?
Note that since the earlier items have more comparisons than the later items, the answer is not simply n/2.

## Input
The input consists of a single line containing the integer n (2 ≤ n ≤ 109).

## Output
Print, on a single line, the last number your friend’s program prints when it is halfway done.

## Sample Input and Output
4  1
7  2
10  3
1919  562
290976843  85225144