void print_times_table(int n)
{
int i;
int result;
if (n > 15 || n < 0)
return;
for (i = 0; i <= 15; i++)
{
result = i * n;
printf("%d x %d = %d\n", i, n, result);
}
}
