# include <stdio.h>
void reverse(char *str)
{
if (*str)
{
	reverse(str + 1);
	printf("%c", *str);
}
}
int main()
{
char a[] = "Abhinandan Kumar Yadav";
reverse(a);
}

