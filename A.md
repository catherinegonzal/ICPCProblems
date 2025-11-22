## A. Archmage's Crystals
time limit per test1 second
memory limit per test256 megabytes
In the high halls of Numeria, an archmage tends to 𝑛 magic crystals with powers 𝑎1,𝑎2,…,𝑎𝑛. With a fusion spell, he may pick any two crystals with powers 𝑥 and 𝑦, remove them, and create a single crystal of power 𝑥+𝑦. Each spell reduces the number of crystals by 1.

The archmage seeks harmony: he wants the average power of the crystals to become an integer. What is the minimum number of spells he must cast?

## Input
The first line contains an integer 𝑛(1≤𝑛≤106).

The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤103).

## Output
Print a single integer: the minimum number of spells.

## Examples
Input
4
5 2 3 5
Output
1

Input
5
11 12 13 14 15
Output
0

Input
4
1 5 3 7
Output
0

Note
A string 𝑈 is called a subsequence of a string 𝑉 if 𝑈 can be obtained from 𝑉 by deleting zero or more characters without changing the relative order of the remaining characters.


