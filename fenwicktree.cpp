class FenwickTree {
    public:
    ll n;
    vector<ll> tree;
    FenwickTree(vector<ll>& v1) : n(v1.size()), tree(v1.size()+1, 0) {
        for(ll i = 0; i < n; i++)
            update(i+1, v1[i]);
    }
    void update(ll i, ll val) {
        for(ll j = i; j <= n; j += j & (-j))
            tree[j] += val;
    }
    ll query(ll a) {
        ll total = 0;
        while(a>0){
            total += tree[a];
            a-=(a&(-a));
        }
        return total;
    }
    ll query(ll a, ll b) {
        return query(b) - query(a-1);
    }
};
