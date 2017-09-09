char *ft_strncpy(char *dest, char *src, size_t n) {
	int i = 0;

	while(i < n && src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
