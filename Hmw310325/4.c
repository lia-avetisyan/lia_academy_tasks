#include <stdio.h>

int main() 
{
    
	int const n = 5;  
   	int arr[n];        

    	printf("Please enter 5 elements : ");

    	for(int i = 0; i < n; ++i) 
	{

        scanf("%d", &arr[i]);

    	}

    
   	 int eveni = 0;
    	 int oddi = n - 1;

	  while(eveni < oddi) 
	  {
        
	  if(arr[eveni] % 2 == 0) 
	  { 

          eveni++;

          }

	  else if(arr[oddi] % 2 != 0) 
	  {
		
          oddi--;

          } 
	  else
	  {
           
           int tmp = arr[eveni];
           arr[eveni] = arr[oddi];
           arr[oddi] = tmp;
           eveni++;
           oddi--;

          }
          }

          for(int i = 0; i < n; ++i) 
	  {

          printf("%d ", arr[i]);

          }

    return 0;
}

