void	memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char*	ptr;
	unsigned char*	ptr2;
	
	ptr = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	while(n > 0)
	{
		*(ptr) = *(ptr2);
		ptr++;
		ptr2++;
		n--;
	}
	return (str1);
}
