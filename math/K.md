## K. Kilometric Intersection
time limit per test1 second
memory limit per test256 megabytes

On the Pan-American Highway, two maintenance crews work on different road segments. Each segment is a closed interval on a line (in kilometers). To coordinate resources, we only need the length of the overlap between both segments.

Given two closed intervals [𝑎,𝑏] and [𝑐,𝑑] (with 𝑎≤𝑏 and 𝑐≤𝑑), print the length of their intersection on the real line. If they do not overlap (or only touch at a single point), the length must be 0.

The length of a closed interval [𝑥,𝑦] is defined as 𝑦−𝑥.

## Input
The first line contains an integer 𝑇 (1≤𝑇≤105), the number of test cases. Each of the next 𝑇 lines contains four integers 𝑎,𝑏,𝑐,𝑑 (−1018≤𝑎≤𝑏≤1018, −1018≤𝑐≤𝑑≤1018).

## Output
For each test case, print a single integer: the intersection length.

## Example
Input
6
3 7 1 5
0 0 0 0
-5 -1 2 8
1 10 3 6
-1 4 4 10
-10 -2 -7 0

Output
2
0
0
3
0
5
