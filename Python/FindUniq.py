# https://www.codewars.com/kata/585d7d5adb20cf33cb000235

def find_uniq(arr):
    uniq = {}
    
    for num in arr:
        uniq.setdefault(num, 0)
        uniq[num] += 1
    
    return min(uniq, key=uniq.get)


def main():
    results = []
    mustBe = [2, 0.55, 10, 7]

    results.append(find_uniq([1, 1, 1, 2, 1, 1]))
    results.append(find_uniq([0, 0, 0.55, 0, 0]))
    results.append(find_uniq([3, 10, 3, 3, 3]))
    results.append(find_uniq([3, 3, 3, 3, 7]))

    print(results, mustBe, sep='\n')

    for res, must in zip(results, mustBe):
        assert(res == must)


if __name__ == '__main__':
    main()
