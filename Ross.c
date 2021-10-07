
#include <stdio.h>
int isArraySorted(int [], int);

int main()
{
  int n, A[1000], i, r;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);
  isArraySorted(A,n);

  return 0;
}

int isArraySorted(int s[], int n) {
  int a = 1, d, i = 0;

  while (i < n - 1) {
   if (s[i] < s[i+1]){
    i++;
    a++;}
  }
 d=n-1;
  if (a==d)
  printf("1");
  else 
  printf("no");
}
