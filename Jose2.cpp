#include<iostream>
#include<vector>
using namespace std;
int calculaP(vector<int> v1, int m,int cont)
{
    vector<int> v2;
    if (v1.size() == 1)
    {
        return v1[0];
    }
    for(int x:v1){
        if (cont==m)
        {
            cont=1;
        }else
        {
            v2.push_back(x);
            cont++;
        }
        
        
    }
    return calculaP(v2,m,cont);
}
int main()
{
    int n,m;
    vector<int> vec;
    cin >> n>> m;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(i + 1);
    }
    int res=calculaP(vec,m,1);
    cout<<res;
    return 0;
}
