int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
