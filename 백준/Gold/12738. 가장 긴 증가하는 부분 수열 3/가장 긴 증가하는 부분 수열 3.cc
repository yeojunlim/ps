#include <cstdio>
#include <vector>
#define MAX 1000001
using namespace std;
typedef long long ll;

int N;
int A[MAX];
vector<ll> res;

int binary_search(int start, int end,ll target) {
    if (start>end) return start;
       
    int mid = (start+end)/2;
    
    if (res[mid]>target) return binary_search(start,mid-1,target);
    else if (res[mid]==target) return mid;
    else return binary_search(mid+1,end,target);
}

int main()
{
    scanf("%d\n",&N);
    for (int i=0;i<N;i++) scanf("%d",&A[i]);
    res.push_back(A[0]);

    for (int i=1;i<N;i++)
    {
        if (res[res.size()-1]<A[i]) res.push_back(A[i]);
        else res[binary_search(0,res.size()-1,A[i])]=A[i];
    }

    printf("%d\n",res.size());
    return 0;
}
