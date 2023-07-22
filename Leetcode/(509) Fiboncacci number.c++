  int find(int num)
  {
      if(num==1||num==0)
      {
          return num;
      }
      else
      {
          return find(num-1) + find(num-2);
      }
  }
class Solution {
public:
    int fib(int n) {
  int a=find(n);
  return a;
}
};