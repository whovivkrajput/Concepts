def summ(a,b):
    res = a+b
    return res


def main():
    s1, s2 = input("Enter two values: ").split(" ", maxsplit=1)
    # s2 = int(input("Enter two values: "))
    print(f"Value 1: {s1} and Value 2: {s2}")
    res = summ(int(s1), int(s2))
    print(res)
    return None


main()