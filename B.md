## B. Bytelandia's stones
time limit per test1 second
memory limit per test256 megabytes

In the mystical Academy of Bytelandia, an archmage is studying a line of 𝑛enchanted stones, each with a power value 𝑎1,𝑎2,…,𝑎𝑛.

A query spell is defined as follows: for two indices 𝐿and 𝑅(1≤𝐿≤𝑅≤𝑛), the spell reveals the total power of the stones from position 𝐿 to 𝑅:

𝑆(𝐿,𝑅)=∑𝑖=𝐿𝑅𝑎𝑖

The oracle wonders: what is the total sum of the answers of all possible queries?

Formally, compute:

(∑𝐿=1𝑁∑𝑅=𝐿𝑁𝑆(𝐿,𝑅))

## Input
The first line contains an integer 𝑛 (1≤𝑛≤105) — the number of stones.

The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤103) — the values of the stones.

## Output
Print a single integer: the total sum of all queries.

## Examples
Input
3
1 2 3
Output
20

Input
5
3 4 7 1 3
Output
133

Input
3
1 10 100
Output
343

