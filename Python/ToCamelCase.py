# https://www.codewars.com/kata/517abf86da9663f1d2000003

import re

def to_camel_case(text: str):
    words = re.split(r'[-_]', text)
    result = words.pop(0)

    for word in words:
        result += word.capitalize()

    return result


def main():
    str1 = to_camel_case('')
    assert(str1 == '')

    str2 = to_camel_case('the_stealth_warrior')
    print(str2)
    assert(str2 == 'theStealthWarrior')

    str3 = to_camel_case('The-Stealth-Warrior')
    assert(str3 == 'TheStealthWarrior')

    str4 = to_camel_case('A-B-C')
    assert(str4 == 'ABC')


if __name__ == "__main__":
    main()
