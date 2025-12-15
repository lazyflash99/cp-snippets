ll binpow(ll a, ll b, ll c = M) {
    if(b<0){
        return -1;
    }
    a %= c;
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }
    return res;
}