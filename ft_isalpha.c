int	ft_isalpha(int c)
{
	while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	}
}

int	main(void)
{
	char str[] = "abc";
	char str1[] = "ABC";
	char str2[] = "123";
	char str3[] = "abcABC";
	char str4[] = "";
	char str5[] = " abc";

	ft_isalpha(str);
	return (0);
}