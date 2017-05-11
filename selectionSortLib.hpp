#ifndef selectionSortLib_hpp
#define selectionSortLib_hpp
#define LEN 9

int sort(int a[],int);

int sort(int list[],int n){
	
	int min;
	int temp;
	
	for(int i = 0 ; i<n ; i++)
	{
		min = i;
		for(int j = i ; j<n; j++)
		{
			if(list[j]<list[min])
			{
				min = j;					
			}			
		}
		int temp = list[i];
		list[i] = list[min];
		list[min] = temp;	
	
	}
	for(int i=0;i<LEN;i++){
		printf("%d ",list[i]);
	}
	
	return 0;
}
#endif
