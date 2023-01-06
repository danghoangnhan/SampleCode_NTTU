def B(cf,p):
    print('A:',end='')

def CF(p):
    print(p,end='')

def A(X):
    print('B:',end='')
    B(CF,X)
    print()

def M(x):
    ff = lambda s:s[0]* s[1] if s[1]>s[2] else s[0]+s[1]
    print(ff(x))
def K(pem):
    if len(pem)<=1:return [pem]
    r=[]
    for i in range(len(pem)):
        others = K(pem[:i]+pem[i+1:])
        for s in others:
            r = r + [pem[i]+s ]
    return r
def g(N):
    for i in range (2,N):
        if(N%i==0): return False
    return True
def f(N):
    data = [i for i in range(2,N) if g(i)==True]
    return data
def h(data):
    result = []
    length = len(data)
    for s in range(length):
        x = data[s]
        y = data[0:s]+data[s+1:length]
        result = result + [x+y]
    return result
    
print(K('XYZ'))
A('C')
M([4,5,6,7])
print(f(20))
print(h('ABCD'))