// functions only

int max(int a, int b) {
  if (a < b) {
    return b;
  } else
    return a;
}
int maxof3(int a, int b, int c) {
  int ans;
  ans = max(a, b);
  ans = max(ans, c);

  if (ans == a)
    return 1;
  else if (ans == b)
    return 2;
  else
    return 3;
}

int equalStacks(int h1_count, int *h1, int h2_count, int *h2, int h3_count,
                int *h3) {
  int top1 = h1_count, top2 = h2_count, top3 = h3_count;
  int sum1 = 0, sum2 = 0, sum3 = 0;
  while (top1 != -1) {
    sum1 = sum1 + h1[top1];
    top1--;
  }
  while (top2 != -1) {
    sum2 = sum2 + h2[top2];
    top2--;
  }
  while (top3 != -1) {
    sum3 = sum3 + h3[top3];
    top3--;
  }
  int whichstack;
  top1 = h1_count;
  top2 = h2_count;
  top3 = h3_count;
  while (top1 != -1 && top2 != -1 && top3 != -1) {
    if (sum3 == sum2 && sum2 == sum1 && sum1 == sum3) {
      break;
    }
    whichstack = maxof3(sum1, sum2, sum3);
    switch (whichstack) {
    case 1: {
      sum1 = sum1 - h1[top1];
      top1--;
      break;
    }
    case 2: {
      sum2 = sum2 - h2[top2];
      top2--;
      break;
    }
    case 3: {
      sum3 = sum3 - h3[top3];
      top3--;
      break;
    }
    }
  }
  return sum1;
}
