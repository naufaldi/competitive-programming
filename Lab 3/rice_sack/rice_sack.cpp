#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int T,N,v;

    scanf("%d",&T);

    for(int tc = 1;tc <= T;++tc){
    	v =0;
        for(int i = 0,x;i < 5;++i){
            scanf("%d",&x);
            v = max(v,x);
        }

        printf("Case #%d:%d\n",tc,v);
    }


}
