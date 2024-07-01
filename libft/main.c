int main() {
    char str1[] = "abcdef";
    char str2[] = "abcdef";

    // Non-overlapping case
    ft_memmove(str1 + 2, str1, 3);
    printf("Non-overlapping: %s\n", str1);  // Expected output: "ababcf"

    // Overlapping case
    ft_memmove(str2 + 1, str2, 3);
    printf("Overlapping: %s\n", str2);  // Expected output: "aabcef"

    return 0;
}
