unsigned int ft_sizeof(char *src){
  int i;
  for (i = 0; src[i] != '\0'; i++);
  return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
  int i;
  
  for (i = 0;i < size - 1; i++) {
    dest[i] = src[i]; 
  }
  dest[size-1] = '\0';

  int src_size = ft_sizeof(src);

  return src_size;
}

