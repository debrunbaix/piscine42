char *ft_strcat(char *dst, char *src){
  int i = 0;
  int j = 0;

  while (dst[i] != '\0') {
    i++;
  }

  while (src[j] != '\0') {
    dst[i] = src[j];
    j++;
    i++;
  }
  dst[i] = '\0';
}
