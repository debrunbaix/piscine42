char *ft_strncat(char *dst, char *src, int n){
  int i = 0;
  int j = 0;

  while (dst[i] != '\0') 
    i++;
  
  for (j = 0; j < n; j++){
    dst[i] = src[j];
    i++;
  }

  dst[i] = '\0';
}
