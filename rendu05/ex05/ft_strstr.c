char *ft_strstr(char *str, char *subsearch) {
	int i = 0; // avancement sur str
	int j = 0; // avancement sur subsearch
	int k = 0; // début de subsearch sur str
	int l = 0; // size of subsearch

	while(subsearch[l])
		l++;

	while(str[i]) {
		if(subsearch[j] == str[i]) {
			k = i;
			j++;
		}
		i++;
	}
	if(j == l)
		return str[k];
	else
		return NULL;
}
