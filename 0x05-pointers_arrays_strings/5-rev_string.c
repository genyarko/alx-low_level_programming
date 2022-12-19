/**
* rev_string - reverses a given string
* @s: string to be reversed 
*
* Description: Takes a given string and reverses it in place
*
* Return: void 
*/

void rev_string(char *s)
{
int start = 0;
int end = 0;
char temp;
while (s[end + 1] != '\0')
end++;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
