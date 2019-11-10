int find(TSMatrix a){
	int x,y,n=0;
	int max=a[0].j,min=a[0].i;
	for (x=0;x<a[MAX_SIZE].i;x++){
		if (a[x+1].i<a[x].i)
		    min=a[x+1].i;
		for (y=0;y<a[MAX_SIZE].j;y++){
			if (a[y].j>max)
			    continue;
			n++;
		}
	}
	return n;
}
