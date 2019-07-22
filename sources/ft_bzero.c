void	bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	
	ptr = (unsigned char*)str;
	while(n > 0)
	{
		*(ptr) = '\0';
		ptr++;
		n--;
	}
	return (str);
}
