#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int  ax,ay,bx,by,cx,cy,dx,dy,difx,dify;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dify = (cy>by)? cy-by:by-cy;
        difx = (bx>ax)? bx-ax:ax-bx;
        dy = (cy>by)? ay+dify : ay-dify;
        dx = (bx>ax)? cx-difx : cx+difx;
        cout<<dify<<" "<<difx<<endl;
        printf("Case %d: %d %d %d\n",i,dx,dy,dify*difx);
    }
    return 0;
}
