int main() {
  // Writing to read-only memory
  char *s = "hello world";
  *s = 'H';
  // Buffer overflow
  // char s[] = "hello world";
  // char c = s[20];
  return 0;
}