#include <stdio.h>
#include <string.h>
int main() 

{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


char x;
scanf("%c", &x);
if (x >= '0' && x <= '9'){
	printf("IS DIGIT");
}
else if (x >= 'A' && x <= 'Z'){
	printf("ALPHA\nIS CAPITAl");
}
else if(x >= 'a' && x <= 'z'){
	printf("ALPHA\nIS SMALL");
}
}
