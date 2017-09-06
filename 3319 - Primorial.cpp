// Problema:	3319 - Primorial
// Autor:		  FernandoJerezano
// Fecha:     05-Septiembre-2017
#include <iostream>
#include <bits/stdc++.h>
#define MAX_N 51

using namespace std;

typedef long long int ll;
vector<ll> primes;
bool criba[MAX_N];
ll primordial[MAX_N];

void sieve(){
	
	ll i,j;
	
	criba[0] = criba[1] = true;
	
	for(i=2;i<MAX_N;i++)if(!criba[i]){
		primes.push_back(i);
		for(j=i*i;j<MAX_N;j+=i){
			criba[j] = true;
		}
	}
	ll mul = 1;
	primordial[0] = primordial[1] = 1;
	ll pi = 0;
	ll pv = primes[pi];
	
	
	//printf("P\tV\tT\n");
	
	for(i=2;i<MAX_N;i++){
		if(i==pv){
			primordial[i] = pv*primordial[i-1];
			pv = primes[++pi];
		}else{
			primordial[i] = primordial[i-1];
		}
		//printf("%lld\t%lld\t%lld\n",pv,i,primordial[i]);
	}
	//cout<<primordial[50]<<endl;
}



int main(){
	
	sieve();
	ll t,n;
	
	scanf("%lld",&t);
	
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",primordial[n]);
	}
	
	return 0;
}





