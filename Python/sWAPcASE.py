def swap_case(s):
    s1=''
    for i in s:
        if i in 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz':
            if ord(i)>91:
                s1+=chr(ord(i)-32)
            else:
                s1+=chr(ord(i)+32)
        else:
            s1+=i
    return s1
