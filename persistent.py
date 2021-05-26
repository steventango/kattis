def sfactor(n, p, factors):
  if p not in factors:
    factors[p] = []
  if n < 10:
    factors[p].append(n)
    return True
  else:
    for i in range(9, 1, -1):
      if n % i == 0:
        factors[p].append(i)
        return sfactor(n // i, p, factors)
    return False

def main():
  factors = dict()

  n = int(input())
  while n > -1:
    if sfactor(n, n, factors):
      if len(factors[n]) < 2:
        print(1, end="")
      factors[n].sort()
      for factor in factors[n]:
        print(factor, end="")
      print()
    else:
      print("There is no such number.")
    n = int(input())


if __name__ == '__main__':
  main()
