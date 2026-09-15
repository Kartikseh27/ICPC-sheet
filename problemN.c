#include <stdio.h>
#include <ctype.h>
int main() 

{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


char x;
scanf("%c", &x);
if ( x >= 'a' && x <='z'){
	char upper = toupper(x);
	printf("%c\n", upper);
}
else if ( x >= 'A' && x <='Z'){
	char lower = tolower(x);
	printf("%c\n", lower);

}


}

