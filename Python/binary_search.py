
def binary_search_rec(lis,l,r,target):
    while l<r:
        mid=l+(r-l)//2
        if lis[mid]==target:
            return True
        elif lis[mid]>=target:
            return binary_search_rec(lis, l, mid-1, target)
        else:
            return binary_search_rec(lis, mid+1, r, target)
    return False


def binary_search_ite(lis,l,r,target):
    while l<r:
        mid=l+(r-l)//2
        if lis[mid]==target:
            return True
        elif lis[mid]>=target:
            r=mid-1
        else:
            l=mid+1
    return False


if __name__=='__main__':
    lis=[]
    n=int(input("Enter size of list "))
    print("Enter Sorted List ")
    for i in range(n):
        a=int(input())
        lis.append(a)
    target=int(input("Enter Target : "))
    print(binary_search_rec(lis, 0, len(lis)-1, target))
    print(binary_search_ite(lis,0,len(lis)-1,target))