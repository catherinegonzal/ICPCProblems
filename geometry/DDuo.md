## D. Duo
time limit per test0.5 seconds
memory limit per test1024 megabytes
Ana, Beto, and Carla are playing a Tournament of Alliances with Points. Each of them has a score, and two of them will ally to form a duo. If the sum of the points of the allies exceeds the points of the third player, the duo wins. Otherwise, the other player wins alone.

Given the scores of the players, can someone win alone?

## Input
A line with 3 positive integers 𝐴, 𝐵, and 𝐶 (1≤𝐴,𝐵,𝐶≤100) indicating the scores of Ana, Beto, and Carla respectively.

## Output
A line with the letter "S" if someone can ensure a win alone, or the letter "N" otherwise.

## Examples
Input
1 2 3
Output
S

Input
4 5 6
Output
N

Input
100 10 10
Output
S

Input
50 50 50
Output
N

Note
In the first example, the player with 3 points can win alone, as the sum of the scores of the other two players does not exceed it.


