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
    //strnstr
        const char haystack[] = "Hello, World!";
    const char needle[] = "World";
    char *result;

    result = ft_strnstr(haystack, needle, 12); // Searching within the first 12 characters
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    result = ft_strnstr(haystack, needle, 5); // Searching within the first 5 characters
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");
	//atoi
	printf("Testing atoi and ft_atoi:\n");


        // Testing atoi
        int atoi_result = atoi(   -42);
        printf("atoi(\"%s\") = %d\n", str, atoi_result);

        // Testing ft_atoi
        int ft_atoi_result = ft_atoi(   -42);
        printf("ft_atoi(\"%s\") = %d\n", str, ft_atoi_result);
	
	//calloc
	    char *arr;
    size_t num_elements = 9;
    size_t element_size = sizeof(char);

    arr = (int *)ft_calloc(num_elements, element_size);
       for (size_t i = 0; i < num_elements; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
	//strdup
	const char *original = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(original);

        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);

        free(duplicate);
	//substr
	  char *s = "Hello, World!";
  char *substring;

  // Test case: normal substring
  substring = ft_substr (s, 7, 5);
  if (substring != NULL)
	{
	  printf ("Substring: %s\n", substring);	// Expected output: "World"
	  free (substring);
	}

  // Test case: start beyond the length of the string
  substring = ft_substr (s, 20, 5);
  if (substring != NULL)
	{
	  printf ("Substring: %s\n", substring);	// Expected output: ""
	  free (substring);
	}

  // Test case: len greater than the remaining length of the string
  substring = ft_substr (s, 7, 50);
  if (substring != NULL)
	{
	  printf ("Substring: %s\n", substring);	// Expected output: "World!"
	  free (substring);
	  //strjoin
	    char *s1_join = "Hello, ";
    char *s2_join = "World!";
    char *result;

    result = ft_strjoin(s1_join, s2_join);
    if (result != NULL)
    {
        printf("Joined string: %s\n", result); // Expected output: "Hello, World!"
        free(result); // Free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return (0);
}
