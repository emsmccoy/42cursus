  /* ************************************************************************** */
  /*                                                                            */
  /*                                                        :::      ::::::::   */
  /*   main.c                                             :+:      :+:    :+:   */
  /*                                                    +:+ +:+         +:+     */
  /*   By: emmalons <emmalons@student.42barcelon      +#+  +:+       +#+        */
  /*                                                +#+#+#+#+#+   +#+           */
  /*   Created: 2024/06/20 17:43:47 by emmalons          #+#    #+#             */
  /*   Updated: 2024/07/04 13:38:57 by emmalons         ###   ########.fr       */
  /*                                                                            */
  /* ************************************************************************** */

  #include <stdio.h>
  #include "libft.h"
  #include <string.h>
  #include <stdlib.h>

  int	main(void)
  {
    char	str[] = "123456789";
    printf("TEST FT_ISALPHA\na = %d\nA = %d\n1 = %d\n$ = %d\n",
      ft_isalpha('a'),
      ft_isalpha('A'),
      ft_isalpha('1'),
      ft_isalpha('$'));
    printf("TEST FT_ISDIGIT\na = %d\nA = %d\n1 = %d\n$ = %d\n",
      ft_isdigit('a'),
      ft_isdigit('A'),
      ft_isdigit('1'),
      ft_isdigit('$'));
    printf("TEST FT_ISALNUM\na = %d\nA = %d\n1 = %d\n$ = %d\n",
      ft_isalnum('a'),
      ft_isalnum('A'),
      ft_isalnum('1'),
      ft_isalnum('$'));
    printf("TEST FT_STRLEN\nLength of %s = %zu\n", str, ft_strlen(str));
    printf("TEST FT_MEMSET\nBefore: %s\n", str);
    char	*str_memset = ft_memset(str, '-', 3);
    printf("After: %s\n", str_memset);

    char	str_bzero[4] = "holi";
    printf("TEST FT_BZERO\nBefore: %s\n", str_bzero);
    ft_bzero(str_bzero, 2);
    printf("After:");
    for (int i = 0; i < 4; i++)
      printf("%c", str_bzero[i]);
    printf("\n");

    printf("TEST FT_MEMCPY\n");
    char	src_memcpy[50] = "This is the source string";
    char	dest_memcpy[50];
    ft_memcpy(dest_memcpy, src_memcpy, strlen(src_memcpy) + 1);
    printf("Source: %s\n", src_memcpy);
    printf("Destination: %s\n", dest_memcpy);

    printf("TEST FT_TOUPPER\na using ft_toupper = %c\na = %c\n", ft_toupper('a'), 'a');
    printf("TEST FT_TOLOWER\nA using ft_tolower = %c\nA = %c\n", ft_tolower('A'), 'A');

    printf("TEST FT_STRCHR\n");
    char	*str_strchr = "Hello World";
    char	*result = ft_strchr(str_strchr, '\0');
    if (result)
      printf("Result found at %ld position of the string\n", result - str_strchr + 1);
    else
      printf("No result found\n");

    printf("TEST FT_STRRCHR\n");
    char	*str_strrchr = "Hello World";
    char	*result_r = ft_strrchr(str_strchr, 'o');
    if (result_r)
      printf("Result found at %ld position of the string\n", result_r - str_strrchr + 1);
    else
      printf("No result found\n");

    printf("TEST FT_MEMMOVE\n");
    char str1[] = "abcdef";
    char str2[] = "abcdef";

    ft_memmove(str1 + 2, str1, 3);
    printf("Non-overlapping: %s\n", str1);

    ft_memmove(str2 + 1, str2, 3);
    printf("Overlapping: %s\n", str2);

    printf("TEST FT_STRLCPY\n");
    char src[] = "Hello, World!";
    char dst[20];
    char dst_small[6];
    size_t len;

    len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Destination: %s\n", dst);
    printf("Length: %zu\n", len);

    len = ft_strlcpy(dst_small, src, sizeof(dst_small));
    printf("Destination: %s\n", dst_small);
    printf("Length: %zu\n", len);

    printf("TEST FT_STRLCAT\n");
    char src_cat[] = "World!";
    char dst_cat[20] = "Hello, ";
    char dst_small_cat[10] = "Hello, ";
    size_t len_cat;

    len_cat = ft_strlcat(dst_cat, src_cat, sizeof(dst_cat));
    printf("Destination: %s\n", dst_cat);
    printf("Length: %zu\n", len_cat);

    len_cat = ft_strlcat(dst_small_cat, src_cat, sizeof(dst_small_cat));
    printf("Destination: %s\n", dst_small_cat);
    printf("Length: %zu\n", len_cat);

    printf("TEST FT_STRNCMP\n");
    char	s1[] = "asdfg";
    char	s2[] = "asDfg";
    int	i;

    i = ft_strncmp(s1, s2, 3);
    printf("%d\n", i);

    printf("TEST FT_MEMCHR\n");
    char str_memchr[] = "Hello, World!";
    char *ptr;

    ptr = ft_memchr(str_memchr, 'W', 13);
    if (ptr != NULL)
      printf("Found 'W' at position: %ld\n", ptr - str_memchr);
    else
      printf("Did not find 'W'\n");

    printf("TEST FT_MEMCMP\n");
    char buf1[] = "Hello";
    char buf2[] = "Hellp";
    int result_memcmp;

    result_memcmp = ft_memcmp(buf1, buf2, 5);
    if (result_memcmp < 0)
      printf("buf1 is less than buf2\n");
    else if (result_memcmp > 0)
      printf("buf1 is greater than buf2\n");
    else
      printf("buf1 is equal to buf2\n");

    printf("TEST FT_STRNSTR\n");
    const char haystack[] = "Hello, World!";
    const char needle[] = "World";
    char *result_strnstr;

    result_strnstr = ft_strnstr(haystack, needle, 12);
    if (result_strnstr)
      printf("Found: %s\n", result_strnstr);
    else
      printf("Not found\n");

    result_strnstr = ft_strnstr(haystack, needle, 5);
    if (result_strnstr)
      printf("Found: %s\n", result_strnstr);
    else
      printf("Not found\n");

    printf("TEST FT_ATOI\n");
    const char *str_atoi = "   -42";
    int atoi_result = atoi(str_atoi);
    printf("atoi(\"%s\") = %d\n", str_atoi, atoi_result);

    int ft_atoi_result = ft_atoi(str_atoi);
    printf("ft_atoi(\"%s\") = %d\n", str_atoi, ft_atoi_result);

    printf("TEST FT_CALLOC\n");
    size_t num_elements = 9;
    size_t element_size = sizeof(char);
    char *arr = (char *)ft_calloc(num_elements, element_size);

    for (size_t i = 0; i < num_elements; i++)
      printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    printf("TEST FT_STRDUP\n");
    const char *original = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(original);
    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", duplicate);
    free(duplicate);

    printf("TEST FT_SUBSTR\n");
    char *s = "Hello, World!";
    char *substring;

    substring = ft_substr(s, 7, 5);
    if (substring != NULL)
    {
      printf("Substring: %s\n", substring);
      free(substring);
    }

    substring = ft_substr(s, 20, 5);
    if (substring != NULL)
    {
      printf("Substring: %s\n", substring);
      free(substring);
    }

    substring = ft_substr(s, 7, 50);
    if (substring != NULL)
    {
      printf("Substring: %s\n", substring);
      free(substring);
    }

    printf("TEST FT_STRJOIN\n");
    char *s1_join = "Hello, ";
    char *s2_join = "World!";
    char *result_join;

    result_join = ft_strjoin(s1_join, s2_join);
    if (result_join != NULL)
    {
      printf("Joined string: %s\n", result_join);
      free(result_join);
    }
    else
    {
      printf("Memory allocation failed.\n");
    }

    return (0);
  }
