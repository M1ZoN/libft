
int memcmp (const void *str1, const void *str2, size_t n)
{
	unsigned char   *ptr1;
	unsigned char   *ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (n == 0)
	return (0);
	while (*ptr1 == *ptr2 && n > 0)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return ((int)(*ptr1 - *ptr2));
}