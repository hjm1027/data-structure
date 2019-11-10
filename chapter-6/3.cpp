int sum(TSMatrix a){
	int x,n=0;
	int min=a.m;
	if (a.n<a.m)
	    min=a.n
	for (x=0;x<min;x++){
		if (a[x].i==a[x].j)
			n+=a[x].e;
	}
	return n;
}
