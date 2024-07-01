int main()
{
    //memmove
	char str1[] = "abcdef";
	char str2[] = "abcdef";

    // Non-overlapping case
    ft_memmove(str1 + 2, str1, 3);
    printf("Non-overlapping: %s\n", str1);  // Expected output: "ababcf"

    // Overlapping case
    ft_memmove(str2 + 1, str2, 3);
    printf("Overlapping: %s\n", str2);  // Expected output: "aabcef"

    //strlcpy
    char src[] = "Hello, World!";
    char dst[20];
    char dst_small[6];
    size_t len;

    // Test with sufficient destination size
    len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Destination: %s\n", dst);  // Expected: "Hello, World!"
    printf("Length: %zu\n", len);      // Expected: 13

    // Test with smaller destination size
    len = ft_strlcpy(dst_small, src, sizeof(dst_small));
    printf("Destination: %s\n", dst_small);  // Expected: "Hello"
    printf("Length: %zu\n", len);            // Expected: 13
   
    //strlcat
    
    char src[] = "World!";
    char dst[20] = "Hello, ";
    char dst_small[10] = "Hello, ";
    size_t len;

    // Test with sufficient destination size
    len = ft_strlcat(dst, src, sizeof(dst));
    printf("Destination: %s\n", dst);  // Expected: "Hello, World!"
    printf("Length: %zu\n", len);      // Expected: 13

    // Test with smaller destination size
    len = ft_strlcat(dst_small, src, sizeof(dst_small));
    printf("Destination: %s\n", dst_small);  // Expected: "Hello, Wo"
    printf("Length: %zu\n", len);            // Expected: 13

    //strncmp
    char	s1[] = "asdfg";
	char	s2[] = "asDfg";
	int	i;

	i = ft_strncmp(s1, s2, 3);
	printf("%d", i);

	//memchr
    char str[] = "Hello, World!";
    char *ptr;

    ptr = ft_memchr(str, 'W', 13); // Search for 'W' in the first 13 bytes of str
    if (ptr != NULL)
        printf("Found 'W' at position: %ld\n", ptr - str);
    else
        printf("Did not find 'W'\n");
	//memcmp
	char buf1[] = "Hello";
    char buf2[] = "Hellp";
    int result;

    result = ft_memcmp(buf1, buf2, 5); // Compare first 5 bytes of buf1 and buf2
    if (result < 0)
        printf("buf1 is less than buf2\n");
    else if (result > 0)
        printf("buf1 is greater than buf2\n");
    else
        printf("buf1 is equal to buf2\n");
    return (0);
}


