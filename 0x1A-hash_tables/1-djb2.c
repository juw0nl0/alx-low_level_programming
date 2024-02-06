/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: The hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ash;
	int c;

	ash = 5381;
	while ((c = *str++))
	{
		ash = ((ash << 5) + ash) + c; /* ash * 33 + c */
	}
	return (ash);
}
