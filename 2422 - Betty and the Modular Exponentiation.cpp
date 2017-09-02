// Problema:	2422 - Betty and the Modular Exponentiation
// Autor:		  FernandoJerezano
// Fecha:		  30-Agosto-2017

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll mod = 1000000000;

ll modPow(ll n, ll e){
	ll b=n%mod, r=1, i=1;
	while(i<=e){
		if(i&e){
			r = (r*b) % mod;
		}
		b = (b*b) % mod;
		i<<=1;
	}
	return r;
}

int main(){
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	ll t;
	ll a,b;
	cin>>t;
	
	while(t--){		
		cin>>a>>b;
		cout<<modPow(a,b)<<"\n";
	}

	
	return 0;
}
