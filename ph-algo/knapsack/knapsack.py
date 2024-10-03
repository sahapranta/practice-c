value  = [4,5,2]
weight = [2,5,3]

def fn(n, W):
    if( n == 0 or W == 0): return 0

    if(weight[n-1] <= W):
        opt1 = fn(n-1, W-weight[n-1])+value[n-1]
        opt2 = fn(n-1, W)
        return max(opt1, opt2)
    else:
        return fn(n-1, W)

d = fn(3,5)
print(d)