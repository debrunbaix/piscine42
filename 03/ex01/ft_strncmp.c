int ft_strncmp(char *s1, char *s2, int n){
  int i = 0;

  for (i = 0; i < n; i++) {
    if (s1[i] < s2[i])
      return -1;
    if (s1[i] > s2[i])
      return 1;
    i++;
  }

  return 0;
}
