


def wrap(string, max_width):
    s=''
    c=0
    while c<len(string) :
        # print(string[c:c+max_width])
        # l.append(string[c:c+max_width])
        s=s+'\n'+string[c:c+max_width]
        c+=max_width
    return s[1:]

