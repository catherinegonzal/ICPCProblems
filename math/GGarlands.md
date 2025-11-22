## G. Garlands
time limit per test0.5 seconds
memory limit per test1024 megabytes

Lucía is organizing two very important competitions: the Argentinian Programming Tournament (TAP in Spanish) and the University Pasapalabra Tournament (TUP in Spanish). These tournaments are held simultaneously at multiple venues.

To decorate these venues, Lucía bought triangular paper banners with letters, like the ones shown in the following image:
APPUNTATTE

Lucía realized that she can rearrange the banners to form different words. Once arranged, she plans to combine some banners to create garlands, which will be sent to the various venues. All these garlands must have exactly three banners, either forming the word "TAP" or the word "TUP". If a garland does not meet these criteria, then it cannot be sent to the venues. Below is an example of how she can do this with the previous banners:
TAP TUP
EA  NT

What is the maximum number of garlands that she can send to the venues?

## Input
A line with a string 𝑆 (3≤|𝑆|≤300), the letters of Lucía's banners.

The notation |𝑆| denotes the number of letters in 𝑆.

It is guaranteed that all its characters are uppercase letters of the English alphabet.

## Output
A line with an integer, the maximum number of garlands that can be sent.

## Examples
Input
APPUNTATTE
OutputCopy
2

Input
TULIPAN
Output
1

Input
TAPTUPTAP
Output
3

Input
TOP
Output
0

Note
The images in the statement correspond to the first example.

In the second example, she can arrange them like this: TUPNILA.


