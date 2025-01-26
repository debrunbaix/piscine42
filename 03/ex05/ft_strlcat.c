int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0') {
    i++;
  }

  return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
  int dest_len = ft_strlen(dest); 
  int src_len = ft_strlen(src); 
  int char_to_cat = size - dest_len - 1; 
  int i = dest_len;
  int j = 0;

  for (j = 0; j < char_to_cat; j++){
    dest[i] = src[j];
    i++;
  }
  
  dest[i] = '\0';

  return dest_len + src_len;
}
