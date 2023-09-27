def is_leap_year(year: int) -> bool:
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        print('true')
        return True
    else:
        print('false')
        return False

if __name__== '__main__':
    is_leap_year(2020)
    is_leap_year(2021)