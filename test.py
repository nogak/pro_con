import sys

# def main(lines):



if __name__ == '__main__':

    n_str, m_str = input().split()
    n = (int)(n_str)
    m = (int)(m_str)

    lines = []
    
    count = 0
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))
        count = count + 1
        if count == n:
            break

    a = [[0] * m for i in range(n)]
    a0 = [[0] * m for i in range(n)]
    for i in range(n):
        for j in range(m):
            a[i][j] = (int)(lines[i][j])
            a0[i][j] = (int)(lines[i][j])

    flag = True
    flag2 = True
    loop_counter = 0
    while flag:
        for i in range(1, n-1):
            for j in range(1, m-1):
                a[i][j] += 1
        loop_counter += 1
        if(loop_counter > 200):
            break
        
        while(flag2):
            counter = 0
            flag2 = False
            for i in range(1, n-1):
                for j in range(1, m-1):
                    min_bar = min(a[i-1][j], a[i+1][j], a[i][j-1], a[i][j+1])
                    
                    if a[i][j] >= min_bar:
                        a[i][j] = min_bar
                        if min_bar < a0[i][j]:
                            a[i][j] = a0[i][j]
                            # flag2 = False
                            counter += 1
                        else:
                            flag2 = True
                    else:
                        counter += 1
                    if counter == (n-2)*(m-2):
                        break
                        # flag = False
    print(a)
    ans = 0
    for i in range(n):
        for j in range(m):
            ans += a[i][j] - a0[i][j]

    print(ans)