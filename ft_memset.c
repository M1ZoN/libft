void	memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char*)str;
	while(n > 0)
	{
		*(ptr) = (unsigned char)c;
		ptr++;
		n--;
	}
	return (str);
}