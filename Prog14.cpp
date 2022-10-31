#include <iostream>
using namespace std;

int binarySearch(int[], int, int, int);

int n,i,j;
int temp;

int main()
{
   int num[18] = {  5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
					8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
					1005231, 6545231, 3852085, 7576651, 7881200, 4581002   };


    for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}






   int search_num, loc=-1;

   cout<<"Enter the number that you want to search: ";
   cin>>search_num;

   loc = binarySearch(num, 0, 18, search_num);

   if(loc != -1)
   {
      cout<<search_num<<" found in the array at the location: "<<loc;
   }
   else
   {
      cout<<"Element not found";
   }
   return 0;
}

int binarySearch(int a[], int first, int last, int search_num)
{
   int middle;
   if(last >= first)
   {
      middle = (first + last)/2;
      //Checking if the element is present at middle loc
      if(a[middle] == search_num)
      {
         return middle+1;
      }

      //Checking if the search element is present in greater half
      else if(a[middle] < search_num)
      {
         return binarySearch(a,middle+1,last,search_num);
      }

      //Checking if the search element is present in lower half
      else
      {
         return binarySearch(a,first,middle-1,search_num);
      }

   }
   return -1;
}