int ft_strcmp(char *s1, char *s2){
  int i = 0;

  while (1) {
    if ((s1[i] == '\0') && (s2[i] != '\0')){
      return -1;
    } else if ((s1[i] != '\0') && (s2[i] == '\0')) {
      return 1;
    } else if ((s1[i] == '\0') && (s2[i] == '\0')) {
      return 0;
    } else {
      i++;
    }
  }
}
