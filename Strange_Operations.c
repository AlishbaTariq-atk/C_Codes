#include <stdio.h >
// Function Declarations 
int strange (int x, int y ); 
int main (void) 
{ 
// Local Declarations 
int a, b, c, d, r, s, t, u, v; 
a = 2; 
b = 4; 
c = 5; 
d = 3; 
r = strange (a, b); 
s = strange (r, c); 
t = strange (strange (s, d), strange (4, 2)); u = strange (t + 3, s + 2); 
v = strange (strange (strange (u, a), b), c); 
printf("%d %d %d %d %d", r, s, t, u, v); return 0; 
} 
// main 
// ===strange=== 
int strange (int x, int y) 
{ 
// Local Declarations 
int t; 
int z; 
// Statements 
t = x + y; 
z = x - y; 
return (t + z); 
} 
