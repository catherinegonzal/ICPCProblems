## G. Gatuno's Descent into Psychopathy
time limit per test1 second
memory limit per test256 megabytes

The once-kind feline Gatuno is a very good and heart-guided person. As every good person, his goodness can be measured. He carries a heart of size 𝐻1
. Unfortunately, now he seeks to shed his humanity. His twisted goal: reduce his heart to size 𝐻2 or smaller through a horrifying ritual — biting innocent dogs.

Each bite comes at a terrible cost to his remaining conscience, but makes subsequent bites easier in his dark transformation...

After biting 𝑛 dogs, the rule of shrinking heart is:

- His heart shrinks: 𝐻𝑛=𝐻1×(𝐵−1𝐵)𝑛 Therefore, each subsequent bite requires 1𝐵 of the previous emotional pain.

Help Gatuno to find the minimum minimum number of dogs Gatuno must bite to reduce his heart size to 𝐻2 or smaller.

## Input
The input consists of multiple test cases.

The first line contains an integer 𝑇 (1≤𝑇≤105).

Each of the next 𝑇 lines describes one test case with three space-separated integers:

- 𝐻1: Initial heart size (1<𝐻1≤1012) — Yes, Gatuno was a really good feline - 𝐻2: Target heart size (0<𝐻2<𝐻1) - 𝐵: Brutality factor (2≤𝐵≤2×105)

## Output
For each test case, output a single integer — the minimum number of dogs Gatuno must bite to reduce his heart size to 𝐻2 or smaller.

## Example
Input
3
100 50 2
1000 1 10
1000 100 10

Output
1
66
22

