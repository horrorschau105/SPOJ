#include <iostream>
#include <map>
using namespace std;
long long _mergeSort(int arr[], int temp[], int left, int right);
long long merge(int arr[], int temp[], int left, int mid, int right);
  
long long mergeSort(int arr[], int array_size)
	{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
	}
long long _mergeSort(int arr[], int temp[], int left, int right)
	{
	long long mid, inv_count = 0;
  	if(right>left)
  		{
    	mid = (right + left)/2;
 		inv_count  = _mergeSort(arr, temp, left, mid);
    	inv_count += _mergeSort(arr, temp, mid+1, right);
	    inv_count += merge(arr, temp, left, mid+1, right);
 		}
  	return inv_count;
	}
long long merge(int arr[], int temp[], int left, int mid, int right)
	{
  	int i, j, k;
  	long long inv_count = 0;
	i = left; /* i is index for left subarray*/
  	j = mid;  /* i is index for right subarray*/
  	k = left; /* i is index for resultant merged subarray*/
  	while ((i <= mid - 1) && (j <= right))
  		{
    	if (arr[i] <= arr[j])
    		{
      		temp[k++] = arr[i++];
    		}
    	else
   			{
      		temp[k++] = arr[j++];
  		    inv_count += (mid - i);
  			}
  		}
	while (i <= mid - 1) temp[k++] = arr[i++];
	while (j <= right) temp[k++] = arr[j++];
	for (i=left; i <= right; i++) arr[i] = temp[i];
	return inv_count;
	}
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n;
	string s;
	cin>> tes;
	while(tes--)
		{
		cin>> n;
		map <string, int> mapa;
		int tab[n];
		for(int i=0;i<n;++i)
			{
			cin>> s;
			mapa[s] = i;
			}
		for(int i=0;i<n;++i)
			{
			cin>> s;
			tab[i] = mapa[s];
			}
		//for(int i=0;i<n;++i) cout<< tab[i] << " ";
		cout<< mergeSort(tab, n) << endl;
		}
	}

