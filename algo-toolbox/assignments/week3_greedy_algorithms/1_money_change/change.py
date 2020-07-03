# Uses python3
import sys

def get_change(m):
    result = 0
    result += m/10
    m = m%10

    result += m/5
    m = m%5

    m +=result  
    return int(m)

if __name__ == '__main__':
    m = int(input())
    print(get_change(m))
