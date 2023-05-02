/**
  * wildcmp - func that comp two strings
  *
  * @s1: string 1 
  * @s2: string 2
  *
  * Return: will return either 1 or 0
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
