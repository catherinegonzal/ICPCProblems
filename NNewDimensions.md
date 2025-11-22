## N. New Dimensions
time limit per test0.5 seconds
memory limit per test1024 megabytes

Camila sells boxes in the shape of rectangular parallelepipeds, that is, the usual shape of a box.

If the height, width, and depth of a box are 𝑎, 𝑏, and 𝑐 respectively, Camila sells it for a price of 𝑎2+𝑏2+𝑐2 pesos. The boxes are empty and are only made up of the surface. The material she uses costs half a peso (Argentine currency) per square unit. Therefore, manufacturing a box with height, width, and depth of 𝑎, 𝑏, and 𝑐 costs her 𝑎𝑏+𝑏𝑐+𝑐𝑎 pesos.

Camila has a list of 𝑁 possible values for the height, width, or depth of the boxes. She only manufactures boxes such that each of its three dimensions belongs to this list of 𝑁 measurements she works with. There is no problem using the same value from the list for more than one of the three dimensions of a box.

If she chooses the dimensions 𝑎,𝑏,𝑐 of a box in such a way as to maximize her net profit (the difference between the selling price and the cost), how much can she earn at most from one sale?

## Input
A line with an integer 𝑁 (1≤𝑁≤5000), the number of allowed values for the dimensions of the box.

Then a line with 𝑁 positive integers 𝑉𝑖 (1≤𝑉𝑖≤106), the possible values for the height, width, or depth. There will be no repeated values.

## Output
A single line with a single integer, the maximum amount of money that Camila can earn from selling a box.

## Examples
Input
1
1000000
Output
0

Input
5
1734 69384 16 22338 320
Output
4811919424

