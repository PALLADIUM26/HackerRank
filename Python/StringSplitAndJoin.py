def split_and_join(line):
    line=line.split()
    result=line[0]
    for i in range(1,len(line)):
        result=result+'-'+line[i]
    return result[:len(result)]
