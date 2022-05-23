/*
					DESCRIPTION

Write a function which converts the input string to uppercase.
*/

char *makeUpperCase (char *string)
{
	for (char *str = string; *str; str++)
		*str = *str >= 'a' && *str <= 'z' ? *str - 32 : *str;
	return (string);
}
