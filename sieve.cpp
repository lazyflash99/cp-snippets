vector<ll> primes;
vector<ll> sieve(ll N) {
    vector<ll> spf(N+1);
    for (ll i = 2; i <= N; i++) {
       if (spf[i]) continue;
       spf[i] = i;
       primes.pb(i);
       for (ll u = i*i; u <= N; u += i) {
           if(spf[u]==0)spf[u]=i;
       }
    }
   return spf;
}